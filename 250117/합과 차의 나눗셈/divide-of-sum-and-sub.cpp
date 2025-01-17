#include <iostream>
#include <iomanip> // 소수점 자리수 조정을 위한 헤더
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;

    double result = (a + b) / (a - b);

    // 소수점 둘째 자리까지 출력
    cout << fixed << setprecision(2) << result << endl;

    return 0;
}