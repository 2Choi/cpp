#include<stdio.h>

int get_gcd(int x, int y)
{
    int z;
    do{

        z=x%y;
        x=y;
        y=z;

    }while(z!=0);
    return x;
}

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d", get_gcd(x, y));
    return 0;
}
