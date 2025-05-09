#include <iostream>
#include <vector>
#include <algorithm>

#define MAX_NUM 100
#define DIR_NUM 4

using namespace std;

int n;
int grid[MAX_NUM][MAX_NUM];
bool visited[MAX_NUM][MAX_NUM];
vector<int> block_sizes;
int block_size;

// 방향 벡터 (우, 하, 좌, 상)
int dx[DIR_NUM] = {0, 1, 0, -1};
int dy[DIR_NUM] = {1, 0, -1, 0};

// 격자 범위 내에 있는지 확인
bool InRange(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

// 방문할 수 있는 위치인지 확인
bool CanGo(int x, int y, int num) {
    if (!InRange(x, y))
        return false;
    if (visited[x][y] || grid[x][y] != num) // 같은 숫자로 이루어진 블록만 탐색
        return false;
    return true;
}

// DFS로 블록 탐색
void DFS(int x, int y, int num) {
    for (int dir = 0; dir < DIR_NUM; dir++) {
        int new_x = x + dx[dir];
        int new_y = y + dy[dir];

        if (CanGo(new_x, new_y, num)) {
            visited[new_x][new_y] = true;
            block_size++;
            DFS(new_x, new_y, num);
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];

    int total_blocks = 0;

    // 격자의 각 위치에서 탐색 시작
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j]) {
                visited[i][j] = true;
                block_size = 1;
                DFS(i, j, grid[i][j]);

                // 블록이 4개 이상이면 터짐
                if (block_size >= 4) {
                    total_blocks++;
                } else {
                    block_sizes.push_back(block_size); // 터지지 않은 블록 크기 저장
                }
            }
        }
    }

    // 터지지 않은 블록 중 최대 크기 찾기
    int max_block_size = block_sizes.empty() ? 0 : *max_element(block_sizes.begin(), block_sizes.end());

    cout << total_blocks << " " << max_block_size << endl;

    return 0;
}
