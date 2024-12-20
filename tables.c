#include <stdio.h>
int main(){
    int table[2][10];
    int i,j;
    for(i=1;i<=10;i++){
        table[0][i]=2*i;
        printf("%d\t",table[0][i]);
    }
    printf("\n");
   for(j=1;j<=10;j++){
        table[1][j]=3*j;
        printf("%d\t",table[1][j]);
    }
    }