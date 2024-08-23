#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> sequence(n);
    for (int i = 0; i < n; ++i) {
        cin >> sequence[i];
    }

    int left = 0;
    int count_one = 0;
    int min_length = INT_MAX;

    for (int right = 0; right < n; right++) {
        if (sequence[right] == 1) {
            count_one++;
        }

        while (count_one >= k) {
            min_length = min(min_length, right - left + 1);
            if (sequence[left] == 1) {
                count_one--;
            }
            left++;
        }
    }

    if (min_length == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << min_length << endl;
    }

    return 0;
}