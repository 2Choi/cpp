#include<stdio.h>
int main()
{
    int p[100][100]={},l,d,x,y,i,j,a,b,n,k;
    scanf("%d %d",&a,&b);
    for(i=1;i<=b;i++)
    {
        for(j=1;j<=a;j++)
        {
            printf("%d",p[i][j]);
        }
        printf("\n");
    }
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d %d",&l,&d,&x,&y);
        for(k=0;k<l;k++)
        {
            if(d==1)
            {
                p[x][y]=1;
                x+=1;
            }
            else
            {
                p[x][y]=1;
                y+=1;
            }
        }
    }
    for(i=1;i<=b;i++)
    {
        for(j=1;j<=a;j++)
        {
            printf("%d",p[i][j]);
        }
        printf("\n");
    }
}
