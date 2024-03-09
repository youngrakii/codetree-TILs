#include <iostream>
using namespace std;

bool Contains369(int n){
    while(n>0){
        if(n%10==3 || n %10 ==6 || n%10 == 9){
            return true;
        }
        n/=10;
    }
    return false;
}
int main(){
    int a,b;
    cin>>a>>b;
    int cnt=0;
    for(int i=a;i<=b;i++){
        if(Contains369(i)||(i%3==0)){cnt++;}
    }
    cout<<cnt;
    return 0;
}