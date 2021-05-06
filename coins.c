#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, s, r, i;
	scanf("%d\t%d", &n, &s);
	r = s / n;
	if (s % n == 0) {

		printf("%d", r);
	}

	else {
		printf("%d", r + 1);
	}

	return 0;
}

