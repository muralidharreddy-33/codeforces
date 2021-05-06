#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, k, i;
	double s = 0, p[110];
	scanf("%d", &n);
	k = n;
	for (i = 0; i < n; i++)
	{
		scanf("%lf", &p[i]);
		s = s + p[i];
	}
	s = (s / k);
	printf("%0.12lf", s );
	return 0;
}