#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if((ch>'a'&&ch<'z')||(ch>'A'&&ch<'Z'))
    {
        printf("alphabet");
    }
    else
    {
        printf("no");
    }
    return 0;
}
