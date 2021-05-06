#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, x, y, z, s = 0 , p = 0, r = 0;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d %d %d", &x, &y, &z);
		s = s + x;
		p = p + y;
		r = r + z;
	}

	if (s == 0 && p == 0 && r == 0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;

}