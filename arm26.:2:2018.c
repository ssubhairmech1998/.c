#include<stdio.h>
#include<conio.h>
int main()
{
int num,original,result=0,remainder;
printf("\n enter the three digit number:");
scanf("%d",&num);
original=num;
while(original!=0)
{
remainder=original%10;
result=remainder*remainder*remainder;
original/=10;
}
if(result==num)
{
printf("\n the output \n %d",num);
}
return 0;
}
