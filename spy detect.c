#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long int n, i, p, s = 0, a;
	scanf("%lld", &n);
	p = n / 2050;
	while (p > 0)
	{
		a = p % 10;
		s = s + a;
		p = p / 10;
	}
	printf("%d", s);
	return 0;
}