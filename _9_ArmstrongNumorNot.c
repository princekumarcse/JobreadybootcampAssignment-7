//9.Write a program to check whether a given number is an Armstrong number or not
#include<stdio.h>
int main()
{
    int x,n,rem,s,y;
    printf("Enter a number:");
    scanf("%d",&x);
    for(n=1;n<=x;n++)
    {
        y=x;
        s=0;
        while(y!=0)
        {
         rem=y%10;
         s=s+(rem*rem*rem);
          y=y/10;
        }
    }
        if(s==x)
            printf("It is an Armstrong Number");
        else
            printf("Not an ARrmstrong number");
    return 0;
}
