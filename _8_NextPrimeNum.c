//8.Write a program to find next Prime number of a given number
#include<stdio.h>
int main()
{
    int a,x,i;
    printf("Enter a number:");
    scanf("%d",&a);
    for(x=a+1; ; x++)
    {
        for(i=2;i<x;i++)
        {
            if(x%i==0)
            break;
        }
        if(x==i)
        break;
    }
    printf("Next prime of %d is %d",a,i);
    return 0;
}

