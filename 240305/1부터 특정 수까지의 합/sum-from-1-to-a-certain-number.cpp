#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int sum=0;
    for(int i=1; i<=n;i++){
        sum+=i;
    }
    cout<<sum/10;
    // 여기에 코드를 작성해주세요.
    return 0;
}