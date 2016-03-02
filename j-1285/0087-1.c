#include<stdio.h>

int m[105][105],n;

int main()
{
    int i,j,x=1,y=1,s=1,b[4][2]={{0,1},{1,0},{0,-1},{-1,0} },c=0;
    scanf("%d",&n);
    for(i=0;i<=n+1;i++)
    {
        m[0][i]=-1;
        m[n+1][i]=-1;
        m[i][0]=-1;
        m[i][n+1]=-1;
    }
    do{
        m[x][y]=s;
        if(m[x+b[c][0]][y+b[c][1]]!=0)
        {
            c++;
            c%=4;
        }
        x+=b[c][0];
        y+=b[c][1];
        s++;

    }while(s<=n*n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
}
