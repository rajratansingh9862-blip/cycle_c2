#include<stdio.h>
int main(){
int x;
int rem;
printf("enter your number:");
scanf("%d",&x);
while(x>0)
{
rem=x%10;
printf("%d\n",rem);
x=x/10;
}
return 0;
}