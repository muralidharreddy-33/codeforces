#include<stdio.h>
#include<string.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	char s[105];
	scanf("%s", &s);
	int i, count = 0, j = 0, k, m, l;
	k = strlen(s);
	for (i = 0; i < strlen(s); i++ )
	{
		if (s[i] >= 65 && s[i] <= 90)
		{
			count++;
		}
		else
		{
			j++;
		}

	}
	if (j >= count)
	{
		m = 0;
		for (i = 0; i < k; i++)
		{
			if (s[i] >= 65 && s[i] <= 90)
			{
				for (l = 65; l <= 90; l++)
				{
					if (s[i] == l)
					{
						m = l + 32;
					}
				}
				printf("%c", m);
			}
			else
			{
				printf("%c", s[i]);
			}
		}
	}
	else
	{
		for (i = 0; i < k; i++)
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				for (l = 97; l <= 122; l++)
				{
					if (s[i] == l)
					{
						m = l - 32;
					}
				}
				printf("%c", m);
			}
			else
			{
				printf("%c", s[i]);
			}
		}
	} return 0;

}
