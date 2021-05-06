#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t, n, d, a[105], i, j, max, k;
	scanf("%d", &t);
	while (t--)
	{
		max = 0;
		scanf("%d %d", &n, &d);
		for (i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
			if (a[i] > max)
			{
				max = a[i];
			}
		}
		if (max <= d)
		{
			printf("YES\n");
		}
		else if (max > d)
		{
			for (i = 0; i < n - 1; i++)
			{
				for (j = 0; j < n - 1 ; j++)
				{
					if (a[j] > a[j + 1])
					{
						k = a[j];
						a[j] = a[j + 1];
						a[j + 1] = k;
					}
				}
			}

			if (a[0] + a[1] <= d) {
				printf("YES\n");
			}
			else printf("NO\n");

		}

	}
	return 0;
}