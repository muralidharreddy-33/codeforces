#include <stdio.h>
#include <math.h>

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, count = 0, x;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++) {
            x = sqrt(a[i]);
            if (x * x != a[i]) {
                count++;
                printf("YES\n");
                break;
            }
        }
        if (count == 0)
            printf("NO\n");
    }
    return 0;
}