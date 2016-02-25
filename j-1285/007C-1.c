#include<stdio.h>
int main()
{
    int b,c, y,x[13],z[32];
    scanf("%d %d %d", &y,&x[13],&z[32]);
    if(y%400==0||y%4==0&&y%100!=0)
    {
        printf("%d %d %d",y,x,z);
    }

}
