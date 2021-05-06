#include<stdio.h>
#include<string.h>
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    char A[100];
    int count = 0;
    scanf("%s", A);
    int l = strlen(A);
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (A[i] == A[j])
            {
                count++;
                break;
            }
        }
    }
    printf("%d\n", count);
    int num = l - count;
    if (num % 2 == 0)
    {
        printf( "CHAT WITH HER!");
    }
    else
    {
        printf( "IGNORE HIM!");
    }
}