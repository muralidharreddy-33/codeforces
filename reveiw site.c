#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t, n, a, j, i, count;
	scanf("%d", &t);
	for (i = 1; i <= t; i++)
	{
		count = 0;
		scanf("%d", &n);
		for (j = 1; j <= n; j++)
		{
			scanf("%d", &a);
			if (a == 1 || a == 3)
			{
				count++;
			}

		}
		printf("%d\n", count);
	}
	return 0;
}
