#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int i, t, k, x, r;
	scanf("%d", &t);
	for (i = 1; i <= t; i++)
	{
		scanf("%d", &x);
		for (k = 1; k <= x; k++)
		{
			if (x <= 7)
			{
				printf("%d", 1);
			}

		}
	}
	return 0;

}





