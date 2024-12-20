#include<stdio.h>
#include<math.h>
void prime()
{
int i,n,flag=1;
printf("enter the value on n:");
scanf("%d",&n);
for(i=2;i<=n/2;i++){
    if(n%i==0){
        flag=0;
        break;
    }
}
    if(flag==0){
        printf("%d is not prime",n);
    }else{printf("%d is prime",n);}
}

int main(){
    prime();
}