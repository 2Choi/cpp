#include<stdio.h>
int f(int n)
{
    int i, s=0;
    for(i=0; i<=n; i++)
    {
        s+=i;
    }
    return s;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", f(n));
    return 0;
}
