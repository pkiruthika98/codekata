#include<stdio.h>
int main()
{
    int n,i,j,a[90];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d %d ",a[i],i);
    }
}
