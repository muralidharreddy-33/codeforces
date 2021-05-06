#include<stdio.h>
#include<string.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	char s[105], t[105];
	scanf("%s %s", s, t);
	int k, i, j;
	k = strlen(s);
	for (i = 0, j = 0; i < k; i++, j++)
	{
		if (s[i] != t[j])
		{
			printf("1");
		}
		else
		{
			printf("0");
		}

	}
	return 0;
}