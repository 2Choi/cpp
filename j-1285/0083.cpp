#include<stdio.h>
int main()
{
    int a,b,c,i=0,j;
    char digit[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E'};
    int s[15];
    scanf("%d %d",&a,&b);
    while(a!=0)
    {
        c=a%b;
        a=a/b;
        s[i]=c;
        i++;
    }
    int k;
    for(j=i-1;j>=0;j--)
    {
        k=s[j];
        printf("%c",digit[k]);
    }
}
