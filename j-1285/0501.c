#include

int f(int);
bool is_Pal(int);

int main()
{
    int n, cnt = 0;
    scanf("%d", &n);
    for( cnt = 0 ; !is_Pal(n) ; cnt++ )
    {
        n = n + f(n);
    }
    printf("%d %d", cnt, n);
    return 0;
}
