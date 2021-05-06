#include <stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long  int n, j;
	int  t, i, k, s, a, h, hcf;
	scanf("%d", &t);
	for (i = 1; i <= t; i++)
	{
		scanf("%lld", &n);
		j = n;
		for (k = 1; k > 0; k++)
		{
			s = 0;
			while (j != 0)
			{
				a = j % 10;
				s = s + a;
				j = j / 10;
			}
			for (h = 1; h <= s && h <= n; h++)
			{
				if (s % h == 0 && n % h == 0)
				{
					hcf = h;
				}
			}
			if (hcf != 1)
			{
				printf("%lld\n", n);
				break;
			}
			else
			{
				n = n + 1;
				j = n;
			}
		}
	}
	return 0;
}