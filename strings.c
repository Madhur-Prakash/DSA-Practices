#include<stdio.h>
int count(char arr[]);
int main(){
    char name[100];
    printf("enter the string:-");
    fgets(name,100,stdin);
    printf("The length of the string is:%d\n",count(name));
}

int count(char arr[]){
   int count = 0;
   for (int i=0;arr[i]!='\0';i++){
    count++;
    }
   return (count-1);
}