#include <iostream>
#include <vector>
using namespace std;

const int MOD = 10007;

int main() {
    int n;
    cin >> n;

    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    if (n > 0) dp[1] = 1;

    for (int i = 2; i <= n; ++i) {
        dp[i] = (dp[i-1] + 2 * dp[i-2]) % MOD;
    }

    cout << dp[n] % MOD << endl;
    return 0;
}