#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, i , f = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		f = f + i;
	}
	if (f % 2 == 0)
	{
		printf("%d", 0);
	}
	else
		printf("%d", 1);
	return 0;
}
