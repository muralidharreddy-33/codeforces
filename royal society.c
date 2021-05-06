#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int x, i, r;
	scanf("%d", &x);
	for (i = 1; i <= x; i++)
	{
		if (x % i == 0)

			printf("%d\n", i);

	}
	return 0;


}