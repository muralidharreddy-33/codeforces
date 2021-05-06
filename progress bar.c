#include <stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, k, t, a, temp, i;
	scanf("%d%d%d", &n, &k, &t);
	temp = n * k * t / 100;
	for (i = 0; i < n; i++) {
		a = temp < k ? temp : k;

		printf("%d ", a);
		temp -= a;
	}
	return 0;

}