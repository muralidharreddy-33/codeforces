#include<stdio.h>
#include<math.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t, n, i, s = 0, p = 0, x;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		s = 0;
		p = 0;
		x = 0;
		for (i = 1; i <= (n / 2) - 1; i++)
		{
			s = s + pow(2, i);
		}
		for (i = n / 2; i <= n - 1; i++)
		{
			p = p + pow(2, i);
		}
		s = s + pow(2, n);
		x = s - p;
		printf("%d\n", x);
	}
	return 0;
}