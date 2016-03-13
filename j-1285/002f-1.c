
#include<stdio.h>
int main()
{
    int i=1,a,b,tmp=1;
    scanf("%d %d",&a,&b);

        for(tmp=2;i<b;i++)
        {
            tmp*=2;
        }
        printf("%d",a*tmp);
}
