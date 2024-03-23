#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    double arr[8];
    double sum=0;
    double avg=0;
    for(int i=0;i<8;i++){
        cin>>arr[i];
        sum+=arr[i];
        avg=sum/8;
    }
    cout<<fixed;
    cout.precision(1);
    cout<<avg;
    
    return 0;
}