#include<stdio.h>
int main()
{
 int n,count=0,rem,sum=0,temp1,temp2;
 scanf("%d",&n);
 temp1=temp2=n;
 while(temp1>0)
 {
   
     count++;
     temp1/=10;
 }
 while(temp2>0)
 {
     rem=temp2%10;
     sum=sum+pow(rem,count);
     temp2/=10;
 }
 if(sum==n)
 {
     printf("yes\n");
 }
 else
 {
     printf("No");
 }
return 0;
}
