#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int n,temp,count=0,rem,res=0,lim1,lim2;
printf("enter the limits");
scanf("%d  %d",&lim1,&lim2);
printf("enter the number:");
scanf("%d",&n);
if((n>lim1)&&(n<lim2))
{
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
printf("Armstrong number");
}
else
{
printf("Not an Armstrong number");
}
}
return 0;
}
