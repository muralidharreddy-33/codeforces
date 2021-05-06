#include<stdio.h>
#include<string.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t, n, count, m, j, i;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		char s[n];
		scanf("%s", s);
		int k = strlen(s);
		for ( i = 0; i < k; i++)
		{
			count = 0; m = 0;
			for ( j = 0; j < k; j++)
			{
				if (s[i] == s[j])
				{
					count++;
					if (s[i] == s[j] && m > 0 && j >= i)
					{
						printf("NO\n");
						break;
					}
				}
				else if (s[i] != s[j] && j >= i)
				{
					m++;
				}
			}
			if (s[i] == s[j] && m > 0 && j >= i)
			{
				break;
			}
		}
		if (m < count && i >= j )
		{
			printf("YES\n");
		}

	}
	return 0;
}










