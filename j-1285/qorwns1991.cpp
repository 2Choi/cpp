#include<stdio.h>

int a[30][2]={};
void tree1(int index)
{

    printf("%c", index+64);

    if(a[index][0]!=0)
    {
        tree1( a[index][0] );
    }



    if(a[index][1]!=0)
    {
        tree1( a[index][1] );
    }
}
void tree2(int index)
{
    if(a[index][0]!=0)
    {
        tree2( a[index][0] );
    }

    printf("%c", index+64);

    if(a[index][1]!=0)
    {
        tree2( a[index][1] );
    }
}

void tree3(int index)
{
    if(a[index][0]!=0)
    {
        tree3( a[index][0] );
    }



    if(a[index][1]!=0)
    {
        tree3( a[index][1] );
    }

    printf("%c", index+64);

}

int main()
{
    int n,i;
    char x,y,z;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("\n%c %c %c", &x,&y,&z);

        if(y!='.')
        {
            a[x-64][0]=y-64;
        }
        else
        {
            a[x-64][0]=0;
        }
        if(z!='.')
        {
            a[x-64][1]=z-64;
        }
        else
        {
            a[x-64][1]=0;
        }
    }

    tree1(1);
    printf("\n");
    tree2(1);
    printf("\n");
    tree3(1);
    printf("\n");
}
