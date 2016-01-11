#include<stdio.h>

int isPrime(int n)
{
    int p;
    for(p=2; p<n; p++)
    {
        if(n%p == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n, i, ans = 0;
    scanf("%d", &n);
    for(i = 2 ; i <= n ; i++ )
        if( isPrime(i) )
            ans += i;
    printf("%d", ans);
    return 0;
}
