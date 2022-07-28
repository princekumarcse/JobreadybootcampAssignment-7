//1.Write a program to find the Nth term of the Fibonnaci series.
#include<stdio.h>
int main()
{
    int a=-1,b=1,c,n;
    printf("Enter Nth Term:");
    scanf("%d",&n);
    while(n)
    {
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    printf("Term of Fibonnaci is %d",c);
    return 0;

}