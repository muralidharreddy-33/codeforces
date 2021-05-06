#include<stdio.h>
#include<math.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t, i, k, g, p;
	long int n;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%ld", &n);
		k = n / 2;
		p = sqrt(k);
		p = p * p * 2;
		g = n / 4;
		i = sqrt(g);
		i = i * i * 4;
		if (p == n)
		{
			printf("YES\n");
		}
		else if (i == n)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}


	}
	return 0;
}