/*Developed by Duong Ngoc Huyen - HuyenDTN.B23AT139 - PTIT*/

#include<bits/stdc++.h>
using namespace std;
const int MAX = 100;
vector<int> a[MAX];  
bool visited[MAX];  
vector<pair<int, int>> edges;
void dfs(int u) {
    visited[u] = true;
    for (int v : a[u]) {
        if (!visited[v]) {
            edges.push_back({u+1, v+1}); 
            dfs(v);
        }
    }
}
void bfs(int s) {
    queue<int> q;
    visited[s] = true;
    q.push(s);
    
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        
        for (int v : a[u]) {
            if (!visited[v]) {
                visited[v] = true;
                q.push(v);
                edges.push_back({u+1, v+1});  
            }
        }
    }
}

int main() {
    int t, n, s;
    cin >> t; 
    cin >> n >> s;  
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int v;
            cin >> v;
            a[i].push_back(v - 1); 
        }
    }
    fill(visited, visited + n, false);
    if (t == 1) {  
        dfs(s - 1);
    } else {  
        bfs(s - 1);
    }
    if (edges.size() == n - 1) {
        cout << edges.size() << endl;  
        for (auto edge : edges) {
            cout << edge.first << " " << edge.second << endl;
        }
    } else {
        cout << 0 << endl; 
    }
    return 0;
}