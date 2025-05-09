#include <iostream>
#include <algorithm>

#define MAX_N 100
#define MAX_M 10000
#define MAX_ANS 10001

using namespace std;

// dp[i] : 지금까지 선택한 동전의 합이 i일 때, 
//         가능한 최소 동전 개수
int dp[MAX_M + 1];

int n, m;

int coin[MAX_N + 1];

void Initialize() {
    // 최소를 구하는 문제이므로, 
    // 초기에는 전부 MAX_ANS을 넣어줍니다.
    for(int i = 0; i <= m; i++)
        dp[i] = MAX_ANS;
    
    // 초기 조건으로
    // 아직 아무런 동전도 고르지 않은 상태를 정의합니다.
    // 따라서 지금까지 선택한 동전의 합이 0이며
    // 지금까지 사용한 동전의 수는 0개이므로,
    // dp[0] = 0을 초기 조건으로 설정합니다.
    dp[0] = 0;
}

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        cin >> coin[i];

    Initialize();

    // 지금까지 선택한 동전의 합이 i이기 위해 
    // 필요한 최소 동전 개수를 계산합니다.
    for(int i = 1; i <= m; i++){

        for(int j = 1; j <= n; j++) {
            if(i >= coin[j])
                dp[i] = min(dp[i], dp[i - coin[j]] + 1);
        }
    }

    // 합을 정확히 m을 만들었을 때
    // 필요한 최소 동전의 수를 구해야 하므로
    // dp[m]이 답이 됩니다.
    int min_cnt = dp[m];

    // 거슬러주는것이 불가능 할 시, -1을 출력합니다.
    if(min_cnt == MAX_ANS)
        min_cnt = -1;

    cout << min_cnt;
}
