/*.Write a program to check whether a given 
number is there in the Fibonacci series or not.
*/
#include<stdio.h>
int main()
{
    int a=-1,b=1,x,c,i;
    printf("Enter a number:");
    scanf("%d",&x);
    for( i=0 ; 1 ;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(c==x)
        {
         printf("Yes It is Fibonacci number");
         break;
        }
        if(c>x)
        {
         printf("Not a fibonacci Number");
         break;
        }
        
    
    }
     return 0;
}