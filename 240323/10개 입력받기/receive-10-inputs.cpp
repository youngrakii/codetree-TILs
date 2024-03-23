#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int sum=0;
    int cnt=0;

    for(int i=0;i<10;i++){
        cin>>arr[i];
        if(arr[i]==0){
            break;
        }
        sum+=arr[i];
        cnt++;
    }
    double avg=(double) sum/cnt;

    cout<<fixed;
    cout.precision(1);
    cout<<sum<<" "<<avg;
    return 0;
}