#include<stdio.h>

// f[n] : n��° �Ǻ���ġ ��
int f[100];

// fibo(n) : n��° �Ǻ���ġ ��
int fibo( int n ) {
  // ù ��°�� �� ��° �Ǻ���ġ ���� 1�� ���� �˰� �ִ�
  if ( n==1 || n==2 ) {
    return 1;
  }
  // ���� �տ��� �̹� ���� �Ǻ���ġ ����� �� ������� �ʰ� �ٷ� �������ش�
  if( f[n] != 0 ) return f[n];
  // ó�� ���ϴ� ���̶�� �Ǻ���ġ ���� ���� ����� �����ϰ� �����Ѵ�
  f[n] = fibo(n-1) + fibo(n-2);
  return f[n];
}
int main() {
    int n;
  // scanf.. �Է¹޴� �κ�
  scanf("%d", &n);
  printf("%d",fibo(n));
  return 0;
}
