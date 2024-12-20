#include<stdio.h>
int swap(int*x,int*y);
int main(){
int a,b;

printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
printf("before swap:");
printf("%d,%d\n",a,b);
swap(&a,&b);}

int swap(int*x,int*y){
int t;
t=*x;
*x=*y;
*y=t;
printf("after swap:");
printf("%d,%d",*x,*y);
printf("\n");
printf("before swap:");
printf("%d,%d\n",*x,*y);
}