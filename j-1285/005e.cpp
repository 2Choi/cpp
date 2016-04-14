#include<stdio.h>
int main()
{
    int n, i,c=10000;
    int a[10000]={};
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    i=0;
    c=a[i];
    for(i=0; i<n; i++)
    {
        if(c>a[i])
        {
            c=a[i];
        }
    }
    printf("%d",c);
}
