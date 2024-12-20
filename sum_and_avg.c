#include<stdio.h>
void sum_avg(){
    int a[5]={1,2,3,4,5};
    int sum=0,avg=0;
    for(int i=0;i<5;i++){
        sum+=a[i];}
        avg=sum/5;
        printf("sum of elements on array is %d\n",sum);
        printf("average of elements on array is %d\n",avg);     
    }

int main(){
    sum_avg();}