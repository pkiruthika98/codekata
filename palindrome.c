#include<stdio.h>
#include<math.h>
int main()
{
   int n,sum=0,rem,a;
   scanf("%d",&n);
   a=n;
   while(a>0)
   {
      rem=a%10;
      sum=sum*10+rem;
      a=a/10;
   }
   if(sum==n)
   {
       printf("yes");
   }
   else
   {
       printf("no");
   }
    return 0;
}
