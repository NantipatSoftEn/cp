// too easy to AC
#include <bits/stdc++.h>

using namespace std;

const int N = 105;

char s[N];

int main() {
  int n, p, q;
  scanf("%d %d %d %s", &n, &p, &q, s);
  for(int i = 0; i * p <= n; i++) {
    if((n - i * p) % q == 0) {
      int j = (n - i * p) / q;
      printf("%d\n", i + j);
      for(int k = 0; k < i; k++) {
        for(int t = 0; t < p; t++) {
          printf("%c", s[k * p + t]);
        }
        printf("\n");
      }
      for(int k = 0; k < j; k++) {
        for(int t = 0; t < q; t++) {
          printf("%c", s[i * p + k * q + t]);
        }
        printf("\n");
      }
      return 0;
    }
  }
  puts("-1");
  return 0;
}
