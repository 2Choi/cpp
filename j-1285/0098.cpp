#include<stdio.h>
int NTTP(int a,int cnt=1)
{
    if(a==1)
    {
        return cnt;
    }
    else
    {
        cnt++;
        return a%2 ? NTTP(a*3+1,cnt) : NTTP(a/2,cnt);
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",NTTP(a));
}
