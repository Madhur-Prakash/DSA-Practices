#include<stdio.h>
int power(int n , int p){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    else{
    int num;
num= n*power(n,p-1);
}}
int main (){
    int n,p;
    printf("enter the number\n");
    scanf("%d",&n);
    printf("enter the power\n");
    scanf("%d",&p);
    printf("answer is %d",power(n , p));}


