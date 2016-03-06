#include<stdio.h>
int main()
{
    int y, m , d , w, s, i=0, day[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
    scanf("%d %d %d", &y, &m, &d);
    m-=1;
    d-=1;
    w=0;
    s=m;
    int tmp,yy;
    do
    {
        if(y%400==0 || y%100!=0 && y%4==0 ){
            yy=1;
        }
        else
        {
             yy=0;
        }
        tmp = day[yy][m];
        d++;
        m+=d/tmp;
        i+=d/tmp;
        y+=m/12;
        m%=12;
        d=d%tmp;
        w++;
        w=w%7;
    }while(w!=0 || i!=2);
    printf("%d %d %d",y,m+1,d+1);
}
