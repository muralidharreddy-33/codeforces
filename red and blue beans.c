#include <stdio.h>

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, r, b, d;
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d %d", &r, &b, &d);
        if (r > b) {
            if (((r - 1) / b) <= d)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else {
            if (((b - 1) / r) <= d)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}
