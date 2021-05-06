#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int w;
	scanf("%d", &w);
	if (w > 2) {
		if (w % 2 == 0)
			printf("YES");
		else
			printf("NO");
	}
	else
		printf("NO");
	return 0;
}