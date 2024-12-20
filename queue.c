#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 4
typedef struct {
    int data[MAX_SIZE];
    int front, rear;
} Queue;

void initQueue(Queue* q) {
    q->front = q->rear = 0;}

int isEmpty(Queue* q) {
    return q->front == q->rear;}

int isFull(Queue* q) {
    return (q->rear + 1) % MAX_SIZE == q->front;}

void enqueue(Queue* q, int value) {
    if (isFull(q)) {
        printf("Queue is full\n");
        return;}else{
    q->data[q->rear] = value;
    q->rear = (q->rear + 1) % MAX_SIZE;
    printf("Enqueued %d\n",value);}}

int dequeue(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");}else{
    int value = q->data[q->front];
    q->front = (q->front + 1) % MAX_SIZE;
    return value;}}

void printQueue(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");}
    printf("Queue: ");
    for (int i = q->front; i != q->rear; i = (i + 1) % MAX_SIZE) {
        printf("%d ", q->data[i]);}
    printf("\n");}

int main() {
    Queue q;
    initQueue(&q);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);    
    printQueue(&q);
    printf("Dequeued: %d\n", dequeue(&q));
    printf("Dequeued: %d\n", dequeue(&q));
    printf("Dequeued: %d\n", dequeue(&q));
    printf("Dequeued: %d\n", dequeue(&q));
    return 0;}