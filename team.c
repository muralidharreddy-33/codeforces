#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, p, s = 0, i, count = 0;
	scanf("%d", &n);
	while (n--)
	{	s = 0;
		for (i = 1; i <= 3; i++)
		{
			scanf("%d", &p);
			s = s + p;
		}
		if (s >= 2) {
			count++;
		}

	}
	printf("%d\n", count);

	return 0;

}