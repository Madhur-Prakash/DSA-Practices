#include<stdio.h>
void array(){
    int a[5]={1,2,3,4,5};
    int temp,i,j;
    printf("orignal array\n");
    for(i=0;i<5;i++){
        printf("%d\n",a[i]);
        }
    for(int i=0,j=4;i<j;i++,j--){
       temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("reversed order\n");
    for(i=0;i<5;i++){
        printf("%d\n",a[i]);
    }
}

int main(){
    array();
}