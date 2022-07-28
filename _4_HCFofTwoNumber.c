/*4.Write a program to calculate
 HCF of two numbers
*/
#include<stdio.h>
int main()
{
    int a,b,hcf;
    printf("Enter Two Numbers:");
    scanf("%d%d",&a,&b);
    hcf=a>b?a:b;
    for(hcf;hcf>=1;hcf--)
    {
        if(a%hcf==0 && b%hcf==0)
        break;
    }
    printf("HCF of %d and %d is %d",a,b,hcf);
    return 0;
}