#include<stdio.h>
int fib(int n);
int main(){
    int a;
    printf("enter the number");
    scanf("%d",&a);
    
    printf("%d",fib(a));

}

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibN,fibNm1,fibNm2;
    fibNm1=fib(n-1);
    fibNm2=fib(n-2);
    fibN=fibNm1+fibNm2;
}