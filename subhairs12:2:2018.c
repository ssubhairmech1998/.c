#include <stdio.h>
int main()
{
    long long b;
    int count = 0;
    clrscr();

    printf("Enter an integer:");
    scanf("%lld", &b);

    while(b != 0)
    {
       
        b /= 10;
        ++count;
    }

    printf("Number of digits:: %d", count);
    return 0;
   
}
