#include<stdio.h>

// f[n] : n번째 피보나치 수
int f[100];

// fibo(n) : n번째 피보나치 수
int fibo( int n ) {
  // 첫 번째와 두 번째 피보나치 수는 1인 것을 알고 있다
  if ( n==1 || n==2 ) {
    return 1;
  }
  // 만약 앞에서 이미 구한 피보나치 수라면 더 계산하지 않고 바로 리턴해준다
  if( f[n] != 0 ) return f[n];
  // 처음 구하는 값이라면 피보나치 수를 구한 결과를 저장하고 리턴한다
  f[n] = fibo(n-1) + fibo(n-2);
  return f[n];
}
int main() {
    int n;
  // scanf.. 입력받는 부분
  scanf("%d", &n);
  printf("%d",fibo(n));
  return 0;
}
