#include<conio.h>
#include<stdio.h>
int main()
{
int n,reverse number=0,remainder;
printf("enter an integer");
scanf("%d",&n);
while(n!=0)
{
remainder=n%10;
reverse number=reverse number*10+remainder;
n=n/10;
}
printf("reverse number =%d",reverse number);
return 0;
}
