//10.Write a program to print all Armstrong numbers under 1000
#include<stdio.h>
#include<math.h>
int main()
{
 int x,n,s,rem;
 for(n=1;n<=1000;n++)
 {
     x=n;
     s=0;
     while(x!=0)
     {
         rem=x%10;
         s=s+(rem*rem*rem);
         x=x/10;
     }
     if(s==n)
        printf("%d ",n);
  }
  return 0;

}
