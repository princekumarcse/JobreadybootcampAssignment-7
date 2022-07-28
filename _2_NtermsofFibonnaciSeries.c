//2.Write a program to print first N terms of Fibonacci series
#include<stdio.h>
int main()
{
    int a=-1,b=1,c,n;
    printf("Enter N Number:");
    scanf("%d",&n);
    for( ; n ; n--)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
    return 0;
}