#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    double sum1=0;
    double sum2=0;
    double avg=0;
    for(int i=0;i<10;i++){
        cin>>arr[i];
        if(arr[i]==0){
            for(int j=0;j<i;j++){
                sum1+=arr[j];
                avg=sum1/i;
            }
            break;
        }
        else{
            sum2+=arr[i];
            avg=sum2/10;
        }
    }
    cout<<sum1<<" ";
    cout<<fixed;
    cout.precision(1);
    cout<<avg;
    return 0;
}