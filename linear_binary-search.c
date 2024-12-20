#include<stdio.h>
int linear_search(int arr[],int size,int e){
    int flag=0;
    for(int i=0;i<size;i++){
        if(arr[i]==e){
            printf("element %d found at index %d\n",e,i);
            flag++;}}
        if(flag<=0){
            printf("Element not found\n");}}
void input_array(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("enter the element %d:-",i+1);
        scanf("%d",&arr[i]);
    }
}
void show(int arr[],int size){
 for(int i=0;i<size;i++){
    printf("%d\t",arr[i]);}
    printf("\n");}

int binary_search(int arr[],int size,int e){
    int low,mid,high,flag=0;
    low=0;
    high=size-1;
    while(low<=high){
    mid=(low+high)/2;
    if(arr[mid]==e){
        printf("element %d found at index %d\n",e,mid);
        flag++;
    }
   if(arr[mid]<e){
    low=mid+1;
   }else{
    high=mid-1;}}
    if(flag<=0){
            printf("Element not found\n");}}
int main(){
    int e,size;
    printf("enter the size of array:-");
    scanf("%d",&size);
    int arr[size];
    input_array(arr,size);
    show(arr,size);
    printf("enter the element to be searched:-");
    scanf("%d",&e);
    printf("with linear search\n");
    linear_search(arr,size,e);
    printf("with binary search\n");
    binary_search(arr,size,e);
    }