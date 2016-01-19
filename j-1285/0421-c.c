#include<stdio.h>
int f(int a, int b)
{
    int i , j, k=0, s=0 , c[200];
    for(i=0;i<a;i++)
    {
        scanf("%d", &c[i]);
        s+=c[i];
        s=s*10;
    }
    for(j=1;j*10<s; j*10)
    {
        s/=10;
        k+=1;
        if(s%10==b)
        {
            return k;
        }
        else
        {
            return a+1;
        }
    }
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", f(a, b));
    return 0;
}
