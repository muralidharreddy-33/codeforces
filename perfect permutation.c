#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, i, k, m;
	scanf("%d", &n);
	if (n % 2 != 0 )
	{
		printf("-1");
	}
	else
	{
		int a[105];
		for (i = 1; i <= n; i++)
		{
			a[i] = i;
			scanf("%d", a[i]);
		}
		if (n % 2 == 0)
		{
			for (i = 1; i <= n; i = i + 2)
			{
				k = a[i];
				a[i] = a[i + 1];
				a[i + 1] = k;
				printf("%d %d ", a[i], a[i + 1]);
			}
		}
	}
	return 0;

}