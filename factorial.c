#include<stdio.h>
void fact(){
    int n;
    printf("enter the value of n:-");
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
            }
    printf("%d",fact);
    }
    int main(){
        fact();        }