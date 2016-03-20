#include<stdio.h>
#include<string.h>

char a[51];
int l;

void printa(int index) {

    int j;
    for(j=index; j>=0 && a[j]!=' ';j--){
        printf("%c", a[j]);
    }
}

int main(){

    fgets(a,50,stdin);

    int i; l = strlen(a);
    for( i=0;i<l;i++ ){
        if( 'a' <= a[i] && a[i] <= 'z' ) a[i] -= 32;
        if( a[i] == ' ' ){
            printa(i-1);
            printf(" ");
        }
        if( a[i] == '.' || a[i] == '!' ) {
            printa(i-1);
            for(;i<l && a[i]!=' ';i++) printf("%c",a[i]);
        } else if ( i==l-1 ) printa(i-1);
    }

    return 0;
}
