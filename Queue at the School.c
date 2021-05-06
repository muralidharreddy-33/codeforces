#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, t, i;
	scanf("%d %d", &n, &t);
	char s[n];
	scanf("%s", s);
	while (t--)
	{
		for (i = 0; i < n; i++)
		{
			if (s[i] == 'B' && s[i + 1] == 'G')
			{
				s[i] = 'G';
				s[i + 1] = 'B';
				i++;
			}
		}
	}
	printf("%s", s);
	return 0;
}
