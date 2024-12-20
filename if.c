#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,ch;
    printf("enter the values of a,b");
    scanf("%d%d",&a,&b);
    printf("enter the choice");
    scanf("%d",&ch);
    if(ch<=5 && ch>0){
    if(ch==1){
    c=a+b;}
    if(ch==2){
    c=a-b;}
    if(ch==3){
    c=a*b;}
    if(ch==4){
    c=a/b;}
    if(ch==5){
    c=a%b;}
    printf("answer=%d\n",c);}else{ 
    printf("enter valid choice\n");}
    printf("thank you\n");}