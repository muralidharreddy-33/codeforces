#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, i, j, count, m, k = 0, s = 0;
	scanf("%d", &n);
	scanf("%d", &m);
	count = 0;
	for (i = 1; i <= m; i++)
	{
		if (m % i == 0)
			count++;
	}
	if (count != 2)
	{
		printf("NO");
	}
	else
	{
		for (i = n; i <= m; i++)
		{
			k = 0;
			count = 0;
			for (j = 1; j <= i; j++)
			{
				if (i % j == 0)
				{
					count++;
				}
			}
			if (count == 2)
			{
				k++;
				s = s + k;
			}

		}
		if (s == 2)
		{
			printf("YES");
		}
		else
			printf("NO");
	}
	return 0;
}
