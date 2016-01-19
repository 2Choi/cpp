#include<stdio.h>
int f(int a, int b)
{
    int i , c[100000];
    for(i=0;i<a;i++)
    {
        scanf("%d", &c[i]);
    }
    for(i=0;i<a;i++)
    {
        if(c[i]>b)
        {
            break;
        }
    }
    return i+1;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", f(a, b));
    return 0;
}
