#include<stdio.h>
#include<math.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, t,  s;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		if (n % 2 == 0)
		{
			s = n / 2;
			printf("%d\n", s);
		}
		else {
			s = n / 2;
			printf("%d\n", s + 1);
		}
	}
	return 0;
}