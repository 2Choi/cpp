#include<stdio.h>
int main()
{
    int a,b,c,i;
    scanf("%d", &a);
    for(b=1;b<10;b++)
    {
        if(a==1)
        {
            for(b=1;b<=9;b++)
            {
                for(a=2;a<=9;a++)
                {
                    c=a*b;
                    printf("%d*%d=%d ", a,b,c);
                }
                printf("\n");
            }
        }
        else
        {
            c=a*b;
            printf("%d*%d=%d ", a,b,c);
        }
    }
    return 0;
}
