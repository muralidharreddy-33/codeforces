#include<stdio.h>
int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, i, p, s = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &p);
        s = s + p;

    }

    if (s == 0)
        printf("easy");
    else
        printf("hard");


    return 0;
}