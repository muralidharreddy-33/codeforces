#include<stdio.h>
#include <string.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	char s[100];
	scanf("%d", &n);
	while (n--)
	{
		scanf("%s", s);
		if (strlen(s) <= 10)
		{
			printf("%s\n", s);
		}
		else
		{
			printf("%c", s[0]);
			printf("%d", strlen(s) - 2);
			printf("%c\n", s[strlen(s) - 1]);
		}

	}
	return 0;
}