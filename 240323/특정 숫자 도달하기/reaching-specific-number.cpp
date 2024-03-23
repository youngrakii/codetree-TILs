#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    double sum=0;
    double avg=0;
    for(int i=0;i<10;i++){
        if(arr[i+1]>=250){
            sum+=arr[i];
            avg=sum/(i+1);
            break;
        }
        else{
            sum+=arr[i];
            avg=sum/10;
        }
    }
    cout<<sum<<" ";
    cout<<fixed;
    cout.precision(1);
    cout<<avg;

    return 0;
}