#include<stdio.h>
int main() 
{
int a,b,c,d,e,f,g,h,sub,result,result1;
scanf("%d %d",&a,&b);
scanf("%d %d",&c,&d);
e=a*60;
f=c*60;
g=e+b;
h=f+d;
sub=g-h;
result=sub/60;
printf("%d\t",result);
result1=sub%60;
printf("%d",result1);
return 0;
}
