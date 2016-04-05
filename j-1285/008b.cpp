#include<stdio.h>
#include<string.h>
int main()
{
    char data[51],m,i;
    fgets(data,50,stdin);
    m=strlen(data);
    for(i=0;i<m;i++)
    {
        printf("%c",data[m-i-1]);
    }
}
