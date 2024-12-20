#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int* arr;
};


// void show_stack(struct stack* ptr){
//     for(int i=0;i<ptr->size;i++){
//     printf("%d\n",ptr->arr[i]);}}


// int is_empty(struct stack* ptr){
//     if(ptr->top==-1){
//         // printf("Stack is empty\n");
//         return 0;}}

// int is_full(struct stack* ptr){
//     if(ptr->top==ptr->size-1){
//         return 1;}}

void push(struct stack* ptr,int value){
    if(ptr->top==ptr->size-1){
        printf("Stack is full - overflow\n");}else{
            ptr->top++;
            ptr->arr[ptr->top]=value;
            printf("pushed %d to stack\n",value);}}

int pop(struct stack* ptr){
    if(ptr->top==-1){
        printf("Stack is empty - underflow\n");}else{
            int value=ptr->arr[ptr->top];
            ptr->top--;
            printf("popped %d from stack\n",value);}}

int peek(struct stack* ptr,int i){
    if(ptr->top-i+1<0){
        printf("invalid postion");}
        else{
            printf("value at index %d is %d\n",i,ptr->arr[ptr->top-i+1]);}}           


int main(){

    // ############# alternative way, we used pointer as its easy to pass into functions ############
    // struct stack s;
    // s.size=5;
    // s.top=-1;
    // s.arr=(int*)malloc(s.size*sizeof(int));

int value,i;
struct stack* s=(struct stack*)malloc(sizeof(struct stack));
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));

    printf("enter the size of stack:-");
    scanf("%d",&s->size);
    for(int i=0;i<=s->size;i++){
        printf("enter the value of element %d:-",i+1);
        scanf("%d",&value);
        push(s,value);}
    printf("\n");

    printf("Enter number of elements to be popped:-");
    scanf("%d",&value);
    for(int i=0;i<value;i++){
        pop(s);}
    printf("Enter the index:-");
    scanf("%d",&i);
    peek(s,i);    }