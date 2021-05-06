#include <stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, i;
	scanf("%d", &n);
	if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0)
	{
		printf("YES");
	}
	else
	{
		while (n != 0)
		{
			i = n % 10;
			if (i != 4 && i != 7)
			{
				printf("NO");
				break;
			}
			n = n / 10;
			if (n == 0)
			{
				printf("YES");
			}
		}
	}
	return 0;
}