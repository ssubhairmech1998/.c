#include<stdio.h>
#include<conio.h>
int main()
{int i=0,count=0;
char a[15];
printf("\n enter the string");
scanf("%s",&a);
while(a[i]=='\0')
{
 if(a[i]==' ')
 {
 count++;
 }
 i++;
}
printf("\n the output is:",count);
getch();
return 0;
}
