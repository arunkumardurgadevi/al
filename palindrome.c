
#include<stdio.h>
int main()
{
int rev=0,rem,n,original;
printf("enter an integer");
scanf("%d",&n);
original=n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(original==rev)
{
printf("given number is palindrome",original);
}
else
{
printf("given number is not a palindrome",original);
}
return 0;
}
