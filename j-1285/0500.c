#include<stdio.h>

int f(int s)
{
    int i, a, ans=0;
    for(;s!=0;)
    {
        a=s%10;
        s=s/10;
        ans=ans+a;
        ans=ans*10;
    }
    return ans/10;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", f(n));
    return 0;
}
