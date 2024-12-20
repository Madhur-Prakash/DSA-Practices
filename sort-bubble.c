#include<stdio.h>
void show(int arr[],int size){
 for(int i=0;i<size;i++){
    printf("%d\t",arr[i]);}
    printf("\n");}

void sort(int arr[]){
    for(int  j=0;j<5;j++){
    for(int i=0;i<5;i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;}}}}

// **************just a different implementatipon...thats all******************
// void sort(int arr[]){
//     for(int i=0;i<5;i++){
//     for(int j=i+1;j<6;j++){
//         if(arr[j]<arr[i]){
//             int temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;}}}}


int main(){
    int arr[6]={77,11,9,2,17,4};
    printf("Before soring:-\n");
    show(arr,6);
    sort(arr);
    printf("After sorting:-\n");
    show(arr,6);}