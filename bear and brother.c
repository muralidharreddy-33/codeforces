#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a, b, v, k, count = 0, i;
	scanf("%d %d", &a, &b);
	for (i = 1; i != 0; i++)
	{

		v = a * 3;
		k = b * 2;
		count++;
		if (v > k)
		{
			printf("%d", count);
			break;
		}
		a = v;
		b = k;

	}

	return 0;
}