#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    if(a!=0)
    {
      if(a>0) //���ǹ��� ��ø
      {
        printf("plus\n");
      }
      else
     {
        printf("minus\n");
      }
      if(a%2==0)
      {
        printf("even\n");
      }
      else
     {
        printf("odd\n");
      }
    }

}
