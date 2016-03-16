#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d %d",&a,&b);

    do{
        if(a%2==1)
        {
            c+=b;
        }
        a=a>>1;
        b=b<<1;
    }while(a!=0);

    printf("%d",c);
}
