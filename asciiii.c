#include<stdio.h>
void ascii(char ch);
int main(){  
char ch;
printf("enter the character:-");
scanf("%c",&ch);
ascii(ch);
}


void ascii(char ch){
    if(ch>='A' && ch<='Z'){
    printf("%c is capital",ch);}
else if(ch>='a' && ch<='z'){
    printf("%c is small case",ch);}
    else if(ch>=0 && ch<=47||ch>=57 && ch<=64||ch>=91 && ch<=96||ch>=123 && ch<=127){
printf("%c is special symbol",ch);}}