#include<stdio.h>
void main()
{
    int e,f,g;
    printf("enter the values of e,f,g");
    scanf("%d%d%d",&e,&f,&g);
    
    if(e>=f && e>=g)
    {
        printf(" %d\n",e);
    }
    if(f>=e && f>=g)
    {
        printf(" %d\n",f);
    }
    if(g>=e && g>=f)
    {
        printf(" %d\n",g);
     }

}
