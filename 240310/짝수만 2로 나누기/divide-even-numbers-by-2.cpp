#include <iostream>
using namespace std;
int n;
void function(int* x){
    for(int i=0;i<n;i++){
        if(x[i]%2==0){
            x[i]=x[i]/2;
        }
    }
    for (int i=0; i<n; i++){
        cout<<x[i]<<" ";
    }

}
int main() { 
    cin>>n;
    int arr[n]={0,};
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    function(arr);
    return 0;
}