#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, t, i, s, x, j, a[10000], h;
	scanf("%d", &t);
	for (j = 1; j <= t; j++)
	{
		s = 0;
		scanf("%d %d", &n, &x);
		for (i = 0; i < n ; i++)
		{
			scanf("%d", &a[i]);
			s = s + a[i];
		}
		if (s == x)
		{
			printf("NO\n");
			continue;
		}
		else
		{
			s = 0;
			for (i = 0; i < n; i++)
			{
				s = s + a[i];
				if (s == x)
				{
					h = a[i];
					a[i] = a[i + 1];
					a[i + 1] = h;
				}
			}
			printf("YES\n");
			for (i = 0; i < n; i++)
			{
				printf("%d ", a[i]);
			}
			printf("\n");
		}
	}
	return 0;
}