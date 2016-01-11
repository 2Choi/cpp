#include<stdio.h>
int P(int n)
{
    int i, p=0;
    for(i=1; n!=0; i++)
    {
        p+=n%10;
        p*=10;
        n/=10;
    }
    return p/10;
}

int main()
{
    int i,s=0, n;
    scanf("%d", &n);
    for(i=0; n!=P(n); i++)
        {
            printf("%d\n", n);
            printf("%d\n", P(n));
            s+=n;
            n+=P(n);
            printf("----------------------\n");
        }
        printf("%d ", i);
        printf("%d\n", n);
        return 0;
}
