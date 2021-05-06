#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int  t, i, x, y, s, j, g;
	int n, m, k;
	scanf("%d", &t);
	while (t--)
	{
		s = 0; j = 0; x = 1; y = 1;
		scanf("%d %d %d", &n, &m, &k);
		for (i = 1; i <= n; i++)
		{
			if (x != n)
			{
				x = x + 1;
				s = s + y;
				if (x == n) {break;}
			}
		}
		for (i = 1; i <= m ; i++)
		{
			if (y != m)
			{
				y = y + 1;
				j = j + x;
				if (y == m) {break;}
			}
		}
		g = j + s;
		if (g == k)
			printf("YES\n");
		else
			printf("NO\n");

	}
	return 0;
}