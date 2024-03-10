#include <iostream>
using namespace std;

void Calculation(int &a, int &b){
    if(a>b){
        a*=2;
        b+=10;
    }
    if(a<b){
        b*=2;
        a+=10;
    }
}

int main() {
    int a, b;
    cin>>a>>b;
    Calculation(a,b);
    cout<<a<<" "<<b;
    return 0;
}