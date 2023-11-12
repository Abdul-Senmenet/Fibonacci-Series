#include<stdio.h>
void main()
{
    printf("Fibonacci term of a number\n");
    int n1=0,n2=1,n3,t,i;
    scanf("%d",&t);
    printf("%d,%d,",n1,n2);
    for(i=1;i<=t;i++)
    {
        n3=n1+n2;
        printf("%d,",n3);   
        n1=n2;
        n2=n3;
    }
    
}