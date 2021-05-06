#include<stdio.h>
#include<string.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int i, j, count;
	char a[100];
	scanf("%s", &a);
	for (i = 0; i < strlen(a); i++)
	{
		count = 0;
		for (j = 0; j < strlen(a); j++)
		{
			if (a[i] == a[j])
			{
				count++;
				if (count == 7)
				{
					break;
				}
			}
			else
			{
				count = 0;
			}
		}
		if (count == 7)
		{
			printf("YES");
			break;
		}

	}
	if (count != 7)
	{
		printf("NO");
	}

	return 0;


}