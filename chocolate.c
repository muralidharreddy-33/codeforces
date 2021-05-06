#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int i, t;
	long long int s, a, b, c, x, y, z, p;
	scanf("%d", &t);
	for (i = 1; i <= t; i++)
	{
		scanf("%lld %lld %lld %lld", &s, &a, &b, &c);

		x = s / c;
		y = x / a;
		z = y * b;
		p = x + z;
		printf("%lld\n", p);
	}
	return 0;
}