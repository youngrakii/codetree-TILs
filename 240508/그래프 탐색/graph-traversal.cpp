#include <iostream>
#include <vector>

#define MAX_NUM 1000

using namespace std;

int n,m;
int vertex_cnt=0;

//index를 1번 부터 사용하기 위해 MAX_NUM+1만큼 할당합니다.
vector<int> graph[MAX_NUM +1];
bool visited[MAX_NUM+1];

void DFS(int vertex){
    //해당 정점에서 이어져 있는 모든 정점을 탐색해줍니다.
    for(int i=0;i<(int) graph[vertex].size();i++){
        int curr_v=graph[vertex][i];
        if(!visited[curr_v]){
            //아직 방문한 적이 없는 정점에 대해서만 탐색을 진행합니다.
            visited[curr_v]=true;
            vertex_cnt++;
            DFS(curr_v);
        }

    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>m;

    int v1,v2;
    for(int i=0;i<m;i++){
        //각 정점이 서로 이동이 가능한 양방향 그래프이기 때문에
        //각 정점에 대한 간선을 각각 저장해줍니다.
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    visited[1]=true;
    DFS(1);

    cout<<vertex_cnt;
    return 0;
}