
#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	long long int  x, y, n, r, s;
	scanf("%d", &t);
	while (t--)
	{	s = 0;
		scanf("%lld %lld %lld", &x, &y, &n);

		r = n / x;
		s = r * x + y;
		if (s > n)
			s = s - x;
		printf( "%d\n", s);

	}
	return 0;
}