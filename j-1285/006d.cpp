#include<stdio.h>
int main()
{
    int a,b,c,tmp=0;
    scanf("%d %d %d",&a,&b,&c);
    if(c<a)
    {
        tmp=a;
        a=c;
        c=tmp;
    }
    if(c<b)
    {
        tmp=b;
        b=c;
        c=tmp;
    }
    if(c>a+b)
    {
        printf("Not");
    }
    else
    {
        if(a==b && b==c)
        {
            printf("Regular");
        }
        else if(a==b || b==c)
        {
            printf("Isosceles");
        }
        else if(c*c==(a*a)+(b*b))
        {
            printf("Right");
        }
        else
        {
            printf("Normal");
        }
    }
}
