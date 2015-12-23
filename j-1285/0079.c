#include<stdio.h>
int main()
{
    int j, k, n;
    scanf("%d",&n);
        for(j=1; j<=n; j++)
        {
            for(k=1; k<=j; k++)
            {
                printf("*");
            }
            printf("\n");
        }
        for(j=1; j<n; j++)
        {
            for(k=1; k<=n-j; k++)
            {
                printf("*");
            }
        printf("\n");
        }
return 0;
}
