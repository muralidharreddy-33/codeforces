#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a, b, c, max, r, s, x, z;
	scanf("%d %d %d", &a, &b, &c);
	r = a + b + c;
	s = (a + b) * c;
	x = a * (b + c);
	z = a * b * c;
	max = (r > s) ? r : s;
	max = (max > x) ? max : x;
	max = (max > z) ? max : z;
	printf("%d", max);
	return 0;
}