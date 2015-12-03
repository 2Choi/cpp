#include<stdio.h>
int p[101];
int main(){
    int i, j;
    for (i=1; i<=100; i++){
        for (j=i;j<=100;j=j+i){
            p[j]++;
        }
    }



    for (i=1; i<=100; i++){
        if(
            p[i]==2
            )
        printf("%d\n", i);
    }
    return 0;
}
