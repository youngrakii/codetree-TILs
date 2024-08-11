#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max(); // 무한대 값

// 그래프를 표현하기 위한 간선 리스트
vector<pair<int, int>> graph[100001]; // 인접 리스트: (노드, 거리)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    // 그래프 입력
    for (int i = 0; i < M; ++i) {
        int u, v, d;
        cin >> u >> v >> d;
        graph[u].push_back({v, d});
        graph[v].push_back({u, d});
    }

    // 다익스트라 알고리즘
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> distance(N + 1, INF); // 거리 테이블

    // 학교(N번)에서 시작
    pq.push({0, N});
    distance[N] = 0;

    while (!pq.empty()) {
        int dist = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        if (dist > distance[node]) continue;

        for (auto &neighbor : graph[node]) {
            int nextNode = neighbor.first;
            int edgeDist = neighbor.second;
            
            if (distance[node] + edgeDist < distance[nextNode]) {
                distance[nextNode] = distance[node] + edgeDist;
                pq.push({distance[nextNode], nextNode});
            }
        }
    }

    // 학교까지 가는 최대 시간 찾기
    int maxTime = 0;
    for (int i = 1; i < N; ++i) {
        if (distance[i] != INF) {
            maxTime = max(maxTime, distance[i]);
        }
    }

    cout << maxTime << endl;

    return 0;
}