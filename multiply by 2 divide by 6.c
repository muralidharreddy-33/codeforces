#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);
#endif
	int t, i, r, n, count;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		if (n % 6 == 0)
			for (i = 1; n != 1; i++)
			{
				n = n / 6;
			}
		printf("%d", i);
	}
}