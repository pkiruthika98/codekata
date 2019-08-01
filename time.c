#include<stdio.h>
int main()
{
int n,i,r;
scanf("%d",&n);
if(n>0)
{
    i=n%60;
    r=n/60;
    printf("%d %d",r,i);
}
return 0;
}
