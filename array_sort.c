#include<stdio.h>
void input_array(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("Enter the element %d:-",i+1);
        scanf("%d",&arr[i]);
    }
}

void show(int arr[],int size){
 for(int i=0;i<size;i++){
            printf("%d\t",arr[i]);}
            printf("\n");
}

void sort(int arr[],int size){
    int t;
    for(int j=0;j<size;j++){
    for(int i=0;i<size;i++){
    if(arr[i]>arr[i+1]){
        t=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=t;}}}}

int main(){
    int size;
    printf("Enter the size of array:-");
    scanf("%d",&size);
    int arr[size];
    input_array(arr,size);
    printf("Entered array:- ");
    show(arr,size);
    printf("Sorted array is:- ");
    sort(arr,size);
   show(arr,size);} 