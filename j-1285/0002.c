#include<stdio.h>
int main()
{
    int i,j;
    char j[30];
    scanf("%s", j);
    for(i=0; j[i]!='\0'; i++)
    {
       printf("\'%c\'\n", j[i]);
    }
    }
