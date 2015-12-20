#include<stdio.h>
int main()
{
    int i, j, k, l, m, n;
    scanf("%d",&n);
        for(j=1; j<=n; j++)
        {
            for(k=1; k<=j; k++)
            {
                printf("*");
            }
            printf("\n");
        }
        for(l=1; l<n; l++)
        {
            for(m=1; m<=n-l; m++)
            {
                printf("*");
            }
        printf("\n");
        }
return 0;
}
