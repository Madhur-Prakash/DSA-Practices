#include <stdio.h>
#include <stdlib.h>

#define MAX 5 // Maximum size of the queue

// Circular Queue structure
struct CircularQueue {
    int items[MAX];
    int front, rear;
};

// Function to create an empty circular queue
struct CircularQueue* createQueue() {
    struct CircularQueue* queue = (struct CircularQueue*)malloc(sizeof(struct CircularQueue));
    queue->front = -1;
    queue->rear = -1;
    return queue;
}

// Check if the queue is full
int isFull(struct CircularQueue* queue) {
    return (queue->front == (queue->rear + 1) % MAX);
}

// Check if the queue is empty
int isEmpty(struct CircularQueue* queue) {
    return (queue->front == -1);
}

// Enqueue (insertion) operation
void enqueue(struct CircularQueue* queue, int value) {
    if (isFull(queue)) {
        printf("Queue is full. Cannot insert %d.\n", value);
        return;
    }

    if (isEmpty(queue)) {
        queue->front = 0;
    }

    queue->rear = (queue->rear + 1) % MAX;
    queue->items[queue->rear] = value;
    printf("Inserted %d into the queue.\n", value);
}

// Dequeue (deletion) operation
int dequeue(struct CircularQueue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1;
    }

    int value = queue->items[queue->front];

    // If the queue becomes empty after the dequeue
    if (queue->front == queue->rear) {
        queue->front = -1;
        queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % MAX;
    }

    printf("Deleted %d from the queue.\n", value);
    return value;
}

// Function to display the queue
void display(struct CircularQueue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
        return;
    }

    int i;
    printf("Queue: ");
    for (i = queue->front; i != queue->rear; i = (i + 1) % MAX) {
        printf("%d ", queue->items[i]);
    }
    printf("%d\n", queue->items[i]);
}

// Main function to test the circular queue
int main() {
    struct CircularQueue* queue = createQueue();

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);
    enqueue(queue, 50); // Queue is full now

    display(queue);

    dequeue(queue);
    dequeue(queue);

    display(queue);

    enqueue(queue, 60); // Insertion after deletion (circular property)
    enqueue(queue, 70);

    display(queue);

    return 0;
}
