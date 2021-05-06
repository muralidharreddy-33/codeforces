#include <stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long int n, p;
	scanf("%lld", &n);
	int count = 0;
	while (n > 0)
	{
		p = n % 10;
		if (p == 4 || p == 7)
		{
			count++;
		}
		n = n / 10;

	}
	if (count == 4 || count == 7 || count == 47)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}