#include<stdio.h>
main()
{
	int b;
	printf("Enter a year:");
	scanf("%d",&b);
	if(b%4==0)
  {
	printf("%d is a leap year",b);
  }
	else
  {
	printf("%d is not a leap year",b);
  }
	return 0;
}
