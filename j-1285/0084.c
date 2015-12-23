#include<stdio.h>
int main()
{
    int a, s=0, n;
    int b[1000];
    scanf("%d",&n);
    for(a=0; a<n; a++)
    {
        scanf("%d", &b[a]);
        s+=b[a];
    }
    printf("%d\n",s);
    printf("%.2f",(float)s/n);
}
