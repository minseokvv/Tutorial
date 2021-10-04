#include <stdio.h>
int main() {
  int a,b;
  scanf("%d", &a);
  scanf("%d", &b);
  int c = a * (b % 10);
  printf("%d\n", c);
  int d = a * ((b / 10) % 10);
  printf("%d\n", d);
  int e = a * (b / 100);
  printf("%d\n", e);
  int ans = c + d * 10 + e * 100;
  printf("%d\n", ans);
  return 0;
}

/* 드디어 끝났네 */
