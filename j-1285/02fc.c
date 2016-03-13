#include<stdio.h>
int gcd(int x,int y)
{
    int p;
    while(y!=0)
    {
        p=x;
        x=y;
        y=p%y;
    }
    return x;
}
int main()
{
    int i,n,a,b,c,d,e,f,g;
    scanf("%d",&n);
    scanf("%d %d",&a,&b);
    c=a;
    d=b;

    for(i=0;i<n-1;i++)
    {
        scanf("%d %d",&a,&b);

        e=b*c+a*d;
        f=b*d;

        g=gcd(e,f);
        c=e/g;
        d=f/g;
    }
    if(c==0)
    {
        printf("0");
    }
    else
    {
    printf("%d/%d",c,d);
    }
}
