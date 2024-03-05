#include <iostream>
using namespace std;

int Min(int a,int b,int c){
    int min_val=a;
    if(min_val>b) min_val=b;
    if(min_val>c) min_val=c;
    return min_val;
}

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    cout<<Min(a,b,c);
    return 0;
}