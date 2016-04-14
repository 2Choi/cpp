#include<stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("%.1f MB",(float)(a/8)/1024/1024*b*c*d);
}
