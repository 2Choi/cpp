#include<stdio.h>
int main()
{
    int a[101][101],i,j,m, n;
    char c[1001];
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        scanf("%s",c); // 00100
        for(j=0;j<n;j++)
        {
            a[i][j] = c[j]-48;
        }
    }

    ///
    for(j=0;j<n;j++)
    {
        for(i=1;i<m;i++)
        {
            if(a[i][j]!=0 && a[i-1][j]!=0)
            {
                a[i][j]=a[i-1][j]+1;
            }
        }
    }
    ///

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
