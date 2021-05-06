#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t, n, m, v;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d %d", &n, &m);
		if (m % 2 == 0)
		{
			v = n * (m / 2);
			printf("%d\n", v);
		}
		else if (n % 2 != 0)
		{
			v = (n * (m / 2)) + ((n + 1) / 2);
			printf("%d\n", v);
		}
		else if (n % 2 == 0)
		{
			v = (n * (m / 2)) + (n / 2);
			printf("%d\n", v);
		}
	}
	return 0;
}
