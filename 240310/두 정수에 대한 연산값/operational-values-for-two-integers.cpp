#include <iostream>
using namespace std;

void Calculation(int &a, int &b){
    if(a>b){
        a+=25;
        b*=2;
    }
    else if(b>a){
        b+=25;
        a*=2;
    }
}

int main() {
    int a,b;
    cin>>a>>b;
    Calculation(a,b);
    cout<<a<<" "<<b;
    return 0;
}