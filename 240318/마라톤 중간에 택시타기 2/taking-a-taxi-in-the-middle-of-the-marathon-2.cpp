#include <iostream>
#include <climits>
#include <algorithm>
#include <cstdlib>

#define MAX_N 1000
using namespace std;

int n;
int x[MAX_N], y[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=0; i<n;i++){
        cin>>x[i]>>y[i];
    }
    int ans= INT_MAX;
    for(int i=1;i<n-1;i++){
        int dist=0;
        int prev_idx=0;
        for(int j=1;j<n;j++){
            if(j==1) continue;
            dist+=abs(x[prev_idx]-x[j])+abs(y[prev_idx]-y[j]);
            prev_idx=j;
        }
        ans=min(ans,dist);
    }
    cout<<ans;
    return 0;
}