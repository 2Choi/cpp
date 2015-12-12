#include<stdio.h>
int main()
{
    int sum=0;
    int n, i;
    scanf("%d",&n);
    for(i=2; i<=n;i+=2)
    {
                sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
