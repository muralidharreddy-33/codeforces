#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	long long int  t, R, L, i;
	scanf("%lld", &t);
	for (i = 1; i <= t; i++)
	{
		scanf("%lld %lld", &L, &R);
		printf("\n%lld %lld\n", L, 2 * L);
	}

	return 0;
}