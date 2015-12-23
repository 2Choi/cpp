#include<stdio.h>
int colats( int n ){

    int i;
    for(i=1; n!=1; i++)
    {
        if(n%2==0)
        {
            n/=2;
        }
        else
        {
            n=n*3+1;
        }
    }
    return i;

}

int main()
{
    int a, b, i, max=0, n,tmp;
    scanf("%d %d", &a, &b);

    if(a>b)
    {
        tmp=a;
        a=b;
        b=tmp;
    }

    for(;a<=b; a++)
    {
        if(max<=colats(a))
        {
            max=colats(a);
        }
    }
    printf("%d", max);
    return 0;
}
