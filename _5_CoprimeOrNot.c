//5.Write a program to check whether two given numbers are co-prime numbers or not
#include<stdio.h>
int main()
{
    int a,b,i,h;
    printf("Enter a number:");
    scanf("%d%d",&a,&b);
    h=a>b?a:b;
    for(i=2;i<=h ; i++)
    {
        if(a%i==0 && b%i==0)
        break;
    }
    if(i>h)
    printf("Co-Prime number");
    else
    printf("Not a Co-prime number");
    return 0;
}