#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int v, x;
	scanf("%d", &v);
	(v == 2) ? printf("2") : printf("1");
	return 0;
}