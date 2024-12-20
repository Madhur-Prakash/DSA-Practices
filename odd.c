#include<stdio.h>
int main(){
    int odd[5],i,count=0;
    printf("enter the elemnets\n");
    for(i=0;i<5;i++){
        scanf("%d",&odd[i]);
    }
    for(i=0;i<5;i++){
    if(odd[i] % 2 !=0){
         printf("odd elemnets are:%d\n",odd[i]);
         count++;
    }}
    printf(" total odd elements are:%d\n",count);
    return 0;
}