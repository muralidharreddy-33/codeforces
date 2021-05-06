#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int x, r;
	scanf("%d", &x);
	if (x % 5 == 0)
	{
		r = x / 5;
		printf("%d", r);
	}
	else if (x > 5)
	{
		r = x / 5;
		printf("%d", r + 1);
	}
	else
	{
		printf("%d", 1);
	}
	return 0;
}