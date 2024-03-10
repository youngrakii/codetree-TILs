#include <iostream>
using namespace std;
int n;

void cal(int *arr){
    for(int i=0;i<n;i++){
    if(arr[i]<0){
        arr[i]=arr[i]-arr[i]-arr[i];
    }
    }
}
int main() {
    cin>>n;
    int arr[n]={0,};
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }
    cal(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}