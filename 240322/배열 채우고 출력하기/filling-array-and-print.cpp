#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    cin.tie(0);
    cout.tie(0);
    char arr[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(int i=9;i>=0;i--){
        cout<<arr[i];
    }
    return 0;
}