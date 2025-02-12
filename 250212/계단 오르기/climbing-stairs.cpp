#include <iostream>

#define MAX_N 1000
#define modN 10007

using namespace std;

int n;
int dp[MAX_N+1];

int main() {
    cin >> n;
    
    dp[0]=1;
    dp[1]=0;
    dp[2]=1;
    dp[3]=1;

    //dp[i] = dp[i-2] + dp[i-3]

    for(int i=4; i<=n; i++){
        dp[i] = (dp[i-2] + dp[i-3]) % modN;

    }

    cout<<dp[n]<<"\n";

    

    return 0;
}