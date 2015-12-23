#include<stdio.h>
int main()
{
    int i, j, s=0, n;
    int a[100][100];
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            s+=1;
            a[i][j] = s;
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}
