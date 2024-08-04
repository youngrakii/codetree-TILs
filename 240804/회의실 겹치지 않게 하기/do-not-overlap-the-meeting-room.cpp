#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 회의 정보를 저장할 구조체 정의
struct Meeting {
    int start;
    int end;
};

// 회의를 끝나는 시간을 기준으로 정렬하기 위한 비교 함수
bool compare(Meeting a, Meeting b) {
    if (a.end == b.end) {
        return a.start < b.start;
    }
    return a.end < b.end;
}

int main() {
    int n;
    cin >> n;
    vector<Meeting> meetings(n);

    for (int i = 0; i < n; i++) {
        cin >> meetings[i].start >> meetings[i].end;
    }

    // 회의를 끝나는 시간을 기준으로 정렬
    sort(meetings.begin(), meetings.end(), compare);

    int count = 0;
    int endTime = 0;

    // 회의 선택
    for (int i = 0; i < n; i++) {
        if (meetings[i].start >= endTime) {
            // 회의가 이전 회의의 끝나는 시간 이후에 시작하는 경우 선택
            count++;
            endTime = meetings[i].end;
        }
    }

    // 최소한 취소해야 하는 회의 수
    int minCancellations = n - count;

    cout << minCancellations << endl;

    return 0;
}