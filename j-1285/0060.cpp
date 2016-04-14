#include<stdio.h>
int main()
{
    int n, i, j, x, y;
    int a[20][20]={};
    for(i=0; i<19; i++)
    {
        for(j=0; j<19; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d %d", &x, &y);
        for(j=0; j<19; j++)
        {
            if(a[x-1][j]==0)
            {
                a[x-1][j]=1;
            }
            else
            {
                a[x-1][j] = 0;
            }
        }

        for(j=0; j<19; j++)
        {
            if(a[j][y-1]==0)
            {
                a[j][y-1]=1;
            }
            else
            {
                a[j][y-1] = 0;
            }
        }
    }
    for(i=0; i<19; i++)
    {
        for(j=0; j<19; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
