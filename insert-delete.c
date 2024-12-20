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
void insert_array(int arr[],int e,int l,int size){
        printf("valid index\n");
        printf("enter the element:-");
        scanf("%d",&e);
        for(int i=size;i>=l;i--){
        arr[i+1]=arr[i];
        }
        arr[l]=e;
        size++;
        printf("after insertion:-");
        show(arr,size);}
void replace_array(int arr[],int e,int l,int size){
        printf("valid index\n");
        printf("Enter the element:-");
        scanf("%d",&e);
        arr[l]=e;
        printf("after replacing:-");
        show(arr,size);}

void deletee_array(int arr[],int l,int size){
        printf("valid index\n");
        for(int i=l;i<size;i++){
        arr[i]=arr[i+1];
        }
        size--;
        printf("after deletion:-");
        show(arr,size);}   

void deletee_array_by_value(int arr[],int e,int size){
        int flag=0;
       for(int i=0;i<size;i++){
        if(arr[i]==e){
        flag++;
        for(int j=i;j<size;j++){
        // if(arr[j]==arr[j+1]){
        // arr[j]=arr[j+2];
        // size--;}else{
        arr[j]=arr[j+1];
        size--;}}}
        if(flag<=0){
        printf("Element not found");}else{
        printf("after deletion:-");
        show(arr,size);}}

int main(){
int ch,l,e,size,flag=0;
printf("Enter the size of array:-");
scanf("%d",&size);
int arr[size];
input_array(arr,size);
printf("Press 1 for replacing the element\n");
printf("Press 2 for inserting the element\n");
printf("Press 3 for deleting the element by index\n");
printf("Press 4 for deleting the element by value\n");
printf("Press 5 for displaying the array\n");
printf("Enter a choice:-\n");
scanf("%d",&ch);
if(ch==1){ 
    printf("Before replacing:-");
    show(arr,size);
    printf("Enter the index:\n");
    scanf("%d",&l);
    if(l<0 || l>size-1){
        printf("Please enter a valid index\n");
        }else{        
    replace_array(arr,e,l,size);}}
else if(ch==2){
    printf("Before insertion:-");
    show(arr,size);
     printf("Enter the index:\n");
    scanf("%d",&l);
    if(l<0 || l>size-1){
        printf("Please enter a valid index\n");
    }else{
    insert_array(arr,e,l,size);}}
    
else if(ch==3){
    printf("Before deletion:-");
    show(arr,size);
    printf("Enter the index:\n");
    scanf("%d",&l);
    if(l<0 || l>size-1){
    printf("Please enter a valid index\n");
    }else{
    deletee_array(arr,l,size);}}

else if(ch==4){
    printf("Before deletion:-");
    show(arr,size);
    printf("enter the element:-");
    scanf("%d",&e);
    deletee_array_by_value(arr,e,size);}

else if(ch==5){  
    printf("The entered array is:-\n");
    show(arr,size);}
else{
    printf("Wrong choice entered");}}
    
