#include<stdio.h>
int numberReverse(int a, int b=0)
{
    if(a==0)
    {
        return b;
    }
    else
    {
        b=b*10+(a%10);
        a/=10;

        return numberReverse(a,b);
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",numberReverse(a));
}
