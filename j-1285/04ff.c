#include<stdio.h>

int f(int c)
{
    int i;
    for(i=1;c!=1;i++)
    {
        if(c%2==1)
        {
            c=c*3+1;
        }
        else
        {
            c=c/2;
        }
    }
    return i;
}

int get_max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int i, a, b, ans = 0, tmp;
    scanf("%d%d", &a, &b);

    if(a>b)
    {
        tmp=a;
        a=b;
        b=tmp;
    }

    for( i = a ; i <= b ; i++ )
        ans = get_max( ans, f(i) );

    printf("%d", ans);
    return 0;
}
