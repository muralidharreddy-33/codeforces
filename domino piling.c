#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int m, n, s, k;
	scanf("%d %d", &m, &n);
	s = m / 2;
	s = s * n;
	if (m % 2 == 0)
	{
		printf("%d", s);
	}
	else
	{
		k = n / 2;
		k = k + s;
		printf("%d", k);
	}
	return 0;
}