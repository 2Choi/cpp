#include<stdio.h>
int main()
{
    long long int a,b,n,i;
    scanf("%lld %lld %lld",&a,&b,&n);
    for(i=1; i<n; i++)
    {
        a*=b;
    }
    printf("%lld",a);
}
