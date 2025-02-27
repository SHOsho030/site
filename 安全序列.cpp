#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,k;
    scanf_s("%d %d", &n, &k);
    int dp[1000000] = {};
    for (int i = 0; i <= n; i++) {
        dp[i] = 0;
    }
    dp[0] = 1;
    for (int i = 1; i <= n ; i++) {
        if (i - k - 1 >= 0) {
            dp[i] = (dp[i - 1] + dp[i - k - 1]) % 1000000007;
        }   
        else {
            dp[i] = dp[i - 1]+1;
        }
    }
    printf("%d", dp[n]);
    return 0;
}