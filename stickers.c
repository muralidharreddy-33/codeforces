#include <stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, i, t, s = 0, r, j;
	scanf("%d", &t);
	for (i = 1; i <= t; i++)
	{	s = 0;
		scanf("%d", &n);
		for (j = 1; n > 0; j++)
		{
			r = n;
			s = s + r;
			n = n - 1;

		}
		printf("%d\n", s);

	}
	return 0;
}
