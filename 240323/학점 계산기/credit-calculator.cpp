#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    double sum=0;
    double avg=0;
    cin>>n;
    double grade[5];
    for(int i=0;i<n;i++){
        cin>>grade[i];
    }
    for(int i=0;i<n;i++){
        sum+=grade[i];
    }
    avg=sum/n;
    cout<<fixed;
    cout.precision(1);
    if(avg>=4.0) cout<<avg<<"\n"<<"Perfect";
    else if(avg>=3.0&&avg<4.0) cout<<avg<<"\n"<<"Good";
    else cout<<avg<<"\n"<<"Poor";
    return 0;
}