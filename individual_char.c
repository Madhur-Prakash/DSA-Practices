#include<stdio.h>
#include<string.h>
int string(char arr[]);
int main(){
     char name[100];
    printf("enter the string:-");
    fgets(name,100,stdin);
    printf("Individual char are:-\t");
    string(name);}

int string(char arr[]){
    int count = 0;
    for(int i=0;arr[i]!='\0';i++){
    count++;}
    for(int i=0;i<=count-1;i++){
        printf("%c\t",arr[i]);}}