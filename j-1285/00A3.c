#include<stdio.h>
int main()
{
    char data[2001];
    int i,n;
    scanf("%d\n%s",&n,&data);
    for(i=0;i<=7;i++){
    data[i]+=n;
    }
    printf("%d\n%s",n,data);

    return 0;
}
