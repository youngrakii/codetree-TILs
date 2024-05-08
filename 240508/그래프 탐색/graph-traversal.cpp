#include <iostream>
#include <vector>

#define MAX_NUM 1000

using namespace std;

int n,m;
int vertex_cnt;


int graph[MAX_NUM+1][MAX_NUM+1];
bool visited[MAX_NUM+1];

void DFS(int vertex){
    for(int curr_v=1; curr_v<=n; curr_v++){
        if(graph[vertex][curr_v]&&!visited[curr_v]){
            visited[curr_v]=true;
            vertex_cnt++;
            DFS(curr_v);
        }
    }
}



int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>m;

    int v1, v2;
    for(int i=0; i<m; i++){
        cin>>v1>>v2;
        graph[v1][v2]=1;
        graph[v2][v1]=1;
    }

    visited[1]=true;
    DFS(1);

    cout<<vertex_cnt;
    return 0;
}