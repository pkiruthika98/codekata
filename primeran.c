#include<stdio.h>
int main()
{
    int n,k,i,c=0,j;
    scanf("%d%d",&n,&k);
    for(i=n+1;i<=k;i++)
    {
        c=0;
        for(j=1;j<=k-1;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
