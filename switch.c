#include<stdio.h>
int main() {
int a,b,c,ch;
printf ("enter the values of a,b:-");
scanf("%d%d",&a,&b);
printf ("enter the choice");
scanf("%d",&ch);
switch(ch)
{case 1:c=a+b;
break;
case 2:c=a-b;
break;
case 3:c=a*b;
break;
case 4:c=a/b;
break;
case 5:c=a%b;
break;
default:
printf("wrong choice entered\n");}
printf ("answer = %d",c);
}