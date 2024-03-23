#include <iostream>
using namespace std;
int main() {
    int arr[10];
    double sum=0;
    double avg=0;
    int cnt=0;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(int i=0;i<10;i++){
        if((i+1)%2==0){
            sum+=arr[i];
            cnt++;
            avg=sum/cnt;
        }
    }
    cout<<sum<<" ";
    cout<<fixed;
    cout.precision(1);
    cout<<avg;
    
    return 0;
}