#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> grid(N, vector<int>(N));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> grid[i][j];
        }
    }

    vector<vector<int>> dp(N, vector<int>(N, INT_MAX));
    dp[0][0] = grid[0][0];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i > 0) {
                dp[i][j] = min(dp[i][j], max(dp[i-1][j], grid[i][j]));
            }
            if (j > 0) {
                dp[i][j] = min(dp[i][j], max(dp[i][j-1], grid[i][j]));
            }
        }
    }

    cout << dp[N-1][N-1] << endl;

    return 0;
}