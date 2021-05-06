#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int i,  t;
	long long int L, v, l, r, count, j;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%lld %lld %lld %lld", &L, &v, &l, &r);
		r = L / v - (r / v - l / v);
		if (l % v == 0) {
			r--;
		}
		printf("%d\n", r);


	}


	return 0;
}