#include<stdio.h>
int a[3][101]={},n;


int last(int tower){
    int i;
    for(i=n-1;i>=0;i--)
    {
        if(a[tower][i]!=0)
        {
            return i;
        }
    }
}

int last_empty(int tower){
    int i;
    for(i=0;i<n;i++)
    {
        if(a[tower][i]==0)
        {
            return i;
        }
    }
}

void output(){
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[0][i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[1][i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[2][i]);
    }
    printf("\n----------------------\n");
}

// level개만큼 str에서 fin으로 옮기는 함수
void hanoi(int level,int str,int mid,int fin)
{
    if(level==1)
    {
        int s = last(str);
        int f = last_empty(fin);

        a[fin][f] = a[str][s];
        a[str][s]=0;
        output();
    }
    else
    {
        // str=0  mid=1  fin=2

        //hanoi(3-1,0,2,1);
        hanoi(level-1,str,fin,mid);

        //hanoi(1,0,1,2);
        hanoi(1,str,mid,fin);

        //hanoi(3-1,1,0,2);
        hanoi(level-1,mid,str,fin);
    }
}

int main()
{
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a[0][i]=n-i;
    }
    output();
    hanoi(n,0,1,2);
}
