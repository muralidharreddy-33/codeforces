#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, count = 0, i;
	scanf("%d", &n);
	char s[n];
	scanf("%s", s);

	for ( i = 0; i < n; i++) {
		if (s[i + 1] == s[i]) {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}