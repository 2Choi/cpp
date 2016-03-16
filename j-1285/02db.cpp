#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=b-a+1;
    printf("%.0f",c-(floor(sqrt(b))-ceil(sqrt(a))+1));
}
