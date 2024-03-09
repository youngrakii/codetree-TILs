#include <iostream>
using namespace std;

int n1, n2;
int A[]={0,};
int B[]={0,};
bool IsCoPart(){
    for(int i=0; i<n1;i++){
        for(int j=0;j<n2; j++){
            if(A[i]=B[j]){
                if(A[i]=B[j+1]){
                    return true;
                }

            }
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n1>>n2;
    for(int i=0; i<n1;i++){
        cin>>A[i];
    }
    for(int i=0;i<n2;i++){
        cin>>B[i];
    }

    if(IsCoPart()){cout<<"Yes";}
    else{cout<<"No";}

    return 0;
}