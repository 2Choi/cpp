#include<stdio.h>
int main()
{
    int i,n,a[10001],ma=0,mi=32767,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(ma<a[i])
        {
            ma=a[i];
            j=i;
        }
        if(mi>a[i])
        {
            mi=a[i];
            k=i;
        }
    }
    printf("%d : %d\n%d : %d",j+1,ma,k+1,mi);
}
