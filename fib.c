#include<stdio.h>
int main(){
    int n,i,t1=0,t2=1;
 printf("enter the no");
    scanf("%d",&n);
    int sum=0;
        sum=t1+t2;
    for(int i=3;i<=n;i++){
        t1=t2;
        t2=sum;
        sum=t1+t2;
        printf("%d\t",sum);}

}
   