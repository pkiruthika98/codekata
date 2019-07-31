#include<stdio.h>
int main()
{
    int n,a,r,sum=0,c=0,a1,p=1,i;
    scanf("%d",&n);
    a=n;
    a1=n;
    while(a)
    {
        a=a/10;
        c++;
    }
    
    while(a1)
    {
        p=1;
        r=a1%10;
        for(i=0;i<c;i++)
        {
            p=p*r;
        }
        sum=sum+p;
        a1=a1/10;
    }
    if(n==sum)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
