#include <iostream>

using namespace std;

int main() {
    // 정수 배열 선언
    int arr[10];
    int cnt = 0;

    // 10개의 정수를 배열에 입력받으며 0이 있는지 확인합니다.
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        if(arr[i] == 0)
            break;
        cnt++;
    }

    // 0이 입력되기 전까지의 수를 반대 순서로 출력합니다.
    for(int i = cnt - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}