#include<stdio.h>
void small(){
    int a[5]={1,2,3,4,5};
    int small,large;
    for(int i=0;i<5;i++){
        if(a[i]<small){
            small=a[i];}
            if(a[i]>large);{
                large=a[i];}}

        printf("smallest number is %d\n",small);
        printf("largest number is %d\n",large);     
    }

int main(){
    small();}