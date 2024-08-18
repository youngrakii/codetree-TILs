#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int INF = 1e9; // 무한대 값 정의

int main() {
    int n, m;
    cin >> n >> m;

    // 거리 행렬 초기화
    vector<vector<int>> dist(n + 1, vector<int>(n + 1, INF));

    // 각 정점의 자기 자신으로의 경로는 0으로 설정
    for (int i = 1; i <= n; ++i) {
        dist[i][i] = 0;
    }

    // 간선 정보 입력 받기
    for (int i = 0; i < m; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        dist[u][v] = w; // u에서 v로 가는 간선의 가중치 설정
    }

    // 플로이드 워셜 알고리즘 수행
    for (int k = 1; k <= n; ++k) {
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    // 최소 왕복 경로의 가중치 합 찾기
    int min_cycle = INF;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i != j) {
                min_cycle = min(min_cycle, dist[i][j] + dist[j][i]);
            }
        }
    }

    // 결과 출력
    if (min_cycle == INF) {
        cout << -1 << endl; // 만약 왕복 가능한 경로가 없다면 -1 출력
    } else {
        cout << min_cycle << endl; // 최솟값 출력
    }

    return 0;
}