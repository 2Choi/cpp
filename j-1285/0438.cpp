#include<stdio.h>
int multi(int x,int y,int z)
{
    if(x==0)
    {
        return z;
    }
    else
    {
        if(x%2==1)
        {
            z+=y;
        }
        x=x>>1;
        y=y<<1;

        return multi(x,y,z);
    }
}
int main()
{
    int a,b,c=0;
    scanf("%d %d", &a,&b);
    printf("%d",multi(a,b,c));
}
