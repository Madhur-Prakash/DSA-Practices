#include<stdio.h>
int string(char name[]);
int main(){
     char name[100];
    printf("enter the string\n");
    fgets(name,100,stdin);
     printf("string in reverse order is:");
    string(name);
   
}


int string(char name[]){
    int count = 0;
   for (int i=0;name[i]!='\0';i++){
    count++;
    }
    for(int i=count-1;i>=0;i--){
        printf("%c",name[i]);
}
}