#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  long long int n, p;
  int t, s, a, i;
  scanf("%d", &t);
  for (i = 1; i <= t; i++)
  { s = 0;
    scanf("%lld\n", &n);
    if ((n % 2050) != 0)
    {
      printf("%d\n", -1);
    }
    else
    {
      p = n / 2050;
      while (p > 0)
      {
        a = p % 10;
        s = s + a;
        p = p / 10;
      }
      printf("%d\n", s);
    }
  }
  return 0;
}