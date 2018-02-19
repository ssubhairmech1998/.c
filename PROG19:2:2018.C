#include<stdio.h>
int main()
{
	int x,y,z=0;
	printf("ENTER A NUMBER TO CHECK PALINDROME OR NOT:\n");
	scanf("%d",&x);
	int d=x;
	while(x!=0)
	{
		y=x%10;
		z=(z*10)+y;
		x=x/10;
	}
	if(z==d)
	{
		printf("%d IS A PALLINDROME",d);
	}
	else
	{
		printf(" %d IS NOT A PALLINDROME",d);
	}
	return 0;	
}
