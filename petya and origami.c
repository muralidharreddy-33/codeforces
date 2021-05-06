#include<stdio.h>
#include<math.h>
int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, k, r = 2, g = 5, b = 8, c;
	scanf("%d %d", &n, &k);
	r = ceil((2.0 * n ) / k);
	g = ceil((5.0 * n) / k);
	b = ceil((8.0 * n) / k);
	c = r + g + b ;
	printf("%d", c);
	return 0;

}