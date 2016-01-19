#include<stdio.h>
int f(int n)
{
    int a, b, c, d, i;
    char ans[5] ={'M', 'D', 'K', 'G', 'U'};
    for(i=0; i<n; i++)
    {
        scanf("%d %d %d %d", &a,&b,&c,&d);
        printf("%c ", ans[a+b+c+d]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    f(n);
}
