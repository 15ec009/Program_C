
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int n,temp,count=0,rem,res=0;
printf("enter the number:");
scanf("%d",&n);
temp=n;
while(temp!=0)
{
  temp=temp/10;
  ++count;
}
temp=n;
while(temp!=0)
{
rem=temp%10;
res+=pow(rem,count);
temp=temp/10;
}
if(res==n)
{
printf("Yes");
}
else
{
printf("No");
}
return 0;
}
