#include<stdio.h>
int main()
{
    int i, j, s=0, n;
    int a[200][200];
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            {
                s+=1;
                a[i][j] = s;
                printf("%d ",a[i][j]);
                printf("\n");
            if(j == n-1)
            {
                i++;
                for(j=n; j!=0;j--)
                {
                    s+=1;
                    a[i][j] = s;
                    printf("%d ",a[i][j]);
                }
            }
            printf("\n");
        }
    }
}
