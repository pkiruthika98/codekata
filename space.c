#include<stdio.h>
#include<string.h>
int main()
{
    int c=0,i,w=0,t;
    char a[90];
    scanf("%[^\n]",a);
    t=strlen(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            c++;
        }
        else
        {
            w++;
        }
    }
    printf("%d",c);
    return 0;
}
