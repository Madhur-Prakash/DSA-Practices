#include<stdio.h>
#include<math.h>
void armstrong_no(){
    int num,sum=0,n=1;
    printf("enter the no");
    scanf("%d",&num);
    int f=num;
    while(num!=0){
        n=num%10;
        sum=sum+(n*n*n) ;
        num=num/10;
    }
    if(f==sum){
        printf("%d is armstrong number\n",f);
    }
    else{
        printf("%d is not a armstrong number\n",f);
    }
}

int main(){
    armstrong_no();
}