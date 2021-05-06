#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int k, n, w, i, s = 0, v, l;
	scanf("%d %d %d", &k, &n, &w);
	for (i = 1; i <= w; i++)
	{
		v = i * k;
		s = s + v;
	}
	if (s > n)
	{
		l = s - n;
		printf( "%d", l);
	}
	else
	{
		printf("0");
	}

}