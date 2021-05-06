#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, i, r, p, s, q;
	scanf("%d", &n);
	while (1)
	{
		n = n + 1;
		p = n / 1000;
		q = (n % 1000) / 100;
		r = (n % 100) / 10;
		s = (n % 10) / 1;
		if (p != q && p != r && p != s && q != r && q != s && r != s)
		{
			break;
		}

	}
	printf("%d", n);
	return 0;

}

