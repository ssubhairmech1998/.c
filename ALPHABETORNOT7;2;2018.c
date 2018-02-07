#include<stdio.h>
void main()
{
char a;
printf("Enter a character ",a);
scanf("%c",&a);
if((a>='a'&&a<='z')||(a>='A'&&a<='z'))
{
printf("The character which you entered is an Alphabet",a);
}
else
{
printf("This is not an alphabet",a);
}
}
