#include<stdio.h>
int main()
{
    int n,a[90],i,j,r,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<n;i++)
    {
            if(max<a[i])
            {
               max=a[i];
            }
    }
    printf("%d",max);
    return 0;
}
