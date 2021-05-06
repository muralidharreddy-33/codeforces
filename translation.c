#include<stdio.h>
#include<string.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	char s[101], t[101];
	scanf("%s %s", &s, &t);
	int i, k, count = 0;
	k = strlen(s);
	for (i = 0; i < k; i++)
	{
		if (s[i] != t[(k - 1) - i])
		{
			count++;
			continue;
		}
	}
	if (count == 0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}

	return 0;
}

