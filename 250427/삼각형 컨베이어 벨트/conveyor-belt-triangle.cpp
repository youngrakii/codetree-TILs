#include <iostream>

#define MAX_N 200

using namespace std;

int n,t;

int l[MAX_N + 1];
int r[MAX_N + 1];
int d[MAX_N + 1];

int main(){
    //입력:
    cin>>n>>t;

    for(int i=0; i<n; i++){
        cin>>l[i];
    }

    for(int i=0; i<n; i++){
        cin>>r[i];
    }

    for(int i=0; i<n; i++){
        cin>>d[i];
    }

    while(t--){
        int temp = l[n-1];

        for(int i=n-1; i>=1; i--){
            l[i]=l[i-1];
        }
        l[0]=d[n-1];

        int temp2 = r[n-1];
        for(int i=n-1; i>=1; i--){
            r[i]=r[i-1];
        }
        r[0]=temp;

        for(int i=n-1; i>=1; i--){
            d[i]=d[i-1];
        }

        d[0]=temp2;
    }


    //출력:

    for(int i=0; i<n; i++){
        cout<<l[i]<<" "<<"\n";
    }

    for(int i=0; i<n; i++){
        cout<<r[i]<<" "<<"\n";
    }

    for(int i=0; i<n; i++){
        cout<<d[i]<<" "<<"\n";
    }

    return 0;
}