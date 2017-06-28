#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,factotial=1;
printf("enter the number:");
scanf("%d",&n);
if(n==0)
printf("the factorial is 1");
else
{
for(i=1;i<=n;++i)
{
factorial=factorial*i;
}}
printf("the factorial of this given number is %d",factorial);
return 0;
}
