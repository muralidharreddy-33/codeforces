#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a[102], i, n, mi = 105, m = 0, max, min;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] > m)
		{
			m = a[i];
			max = i;
		}
	}
	for (i = 0; i < n; i++)
	{
		if (a[i] <= mi)
		{
			mi = a[i];
			min = i;
		}
	}

	if (max > min)
	{
		min++;
	}
	printf("%d", max + (n - 1) - min);







	return 0;
}