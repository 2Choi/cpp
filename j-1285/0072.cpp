#include<stdio.h>
int main()
{
    int a,b,c,d,tmp;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b)
    {
        tmp=a;
        a=b;
        b=tmp;
    }
    if((a<c && c<b) ^ (a<d && d<b))
    {
        printf("cross");
    }
    else
    {
        printf("not cross");
    }
}
