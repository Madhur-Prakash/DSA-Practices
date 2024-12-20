#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    char* arr;
};

int match(char a,char b){
    if(a=='(' && b==')'){
        return 1;}
    if(a=='{' && b=='}'){
        return 1;}
    if(a=='[' && b==']'){
        return 1;}
    return 0;}

void push(struct stack* ptr,char value){
    if(ptr->top==ptr->size-1){
        printf("Stack is full - overflow\n");}else{
            ptr->top++;
            ptr->arr[ptr->top]=value;
            printf("pushed %c to stack\n",value);}}

char pop(struct stack* ptr){
    if(ptr->top==-1){
        printf("Stack is empty - underflow\n");}else{
            char value=ptr->arr[ptr->top];
            ptr->top--;
            printf("popped %c from stack\n",value);}}

int peek(struct stack* ptr,int i){
    if(ptr->top-i+1<0){
        printf("invalid postion");}
        else{
            printf("value at index %d is %d\n",i,ptr->arr[ptr->top-i+1]);}}           


int parenthesis_match(char* exp){
    char popped_ch;
    struct stack* sp;
    sp->arr=(char*)malloc(sp->size*sizeof(char));
    sp->size=(int)sp->arr+1;
    sp->top=-1;
    for (int i=0;i<exp[i]!='\0';i++){
    if(exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
            push(sp,exp[i]);}
    else if(exp[i]==')'  || exp[i]=='}' || exp[i]==']'){
    if(sp->top==-1){
        printf("Stack is empty - underflow\n");
        return 0;}
            popped_ch = pop(sp);
            if(!match(popped_ch,exp[i])){
                return 0;}}}
            if(sp->top==-1){
        printf("Stack is empty - underflow\n");
        return 1;}else{
            return 0;}}


int main(){

char value;
int i;
char* exp="8*(9)";
if(parenthesis_match(exp)){
    printf("Parenthesis matching");}
else{
    printf("Parenthesis not matching");}}