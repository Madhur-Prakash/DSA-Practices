#include<stdio.h>
int fact(int n);
int main(){
    int a;
    printf("enter the number:-");
    scanf("%d",&a);
    
    printf("%d",fact(a));

}

int fact(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int factN,factNm1,factNm2;
    factNm1=fact(n-1);
    factNm2=fact(n-2);
    factN=factNm1+factNm2;
}
