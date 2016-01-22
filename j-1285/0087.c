#include<stdio.h>
int main()
{
    int a[101][101],n, i=0, j=0, cnt=0;
    int d[4][2]={{0,1},{1,0},{0,-1},{-1,0}},dir=0;
    scanf("%d", &n);


    while(cnt<4)
    {
        cnt+=1;
        a[i][j]=cnt;

        i+=d[dir][0];
        j+=d[dir][1];




        dir++;
        dir=dir%4;
    }

    /*
    0이 아니면 해산한다
    방향틀기 필요한 조건 */




    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
