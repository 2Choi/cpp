#include<stdio.h>
int main()
{
    int n,i,j=0,add=1,cnt=1;
    int a[200][200];
    scanf("%d", &n );

    for(i=0;i<n;i++){
        for(;j>=0 && j<n;j+=add)
        {
             a[i][j]=cnt++;
        }
        add=add*(-1);j+=add;
    }



    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
