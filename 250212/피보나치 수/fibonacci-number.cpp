#include <iostream>
#define MAX_N 45

using namespace std;

int N;
int dp[MAX_N];

int main() {
    cin >> N;
    dp[1]=1;
    dp[2]=1;

    for(int i=3; i<=N; i++){
        dp[i]=dp[i-1]+dp[i-2];
    }

    cout<<dp[N]<<"\n";

    return 0;
}
