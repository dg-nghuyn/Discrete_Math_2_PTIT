/*Developed by Duong Ngoc Huyen - HuyenDTN.B23AT139 - PTIT*/

#include<bits/stdc++.h>
using namespace std;

ifstream in("CK.INP");
ofstream out("CK.OUT");

int t, n, s;
vector<vector<int>> A;
vector<pair<int, int>> T;
vector<bool> check;

void DFS(int u) {
    check[u] = true;
    for (int v : A[u]) {
        if (!check[v]) {
            T.push_back({u, v});
            DFS(v);
        }
    }
}

void BFS(int u) {
    queue<int> q;
    check[u] = true;
    q.push(u);

    while (!q.empty()) {
        int k = q.front();
        q.pop();

        for (int v : A[k]) {
            if (!check[v]) {
                check[v] = true;
                T.push_back({k, v});
                q.push(v);
            }
        }
    }
}

int main() {
    in >> t >> n >> s;
    A.resize(n + 1);
    check.assign(n + 1, false);

    int x;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            in >> x;
            if (x == 1) {
                A[i].push_back(j);
            }
        }
    }

    if (t == 1) DFS(s);
    else BFS(s);

    if (T.size() == n - 1) {
        out << n - 1 << "\n";
        for (auto &e : T) {
            if (e.first < e.second) {
                out << e.first << " " << e.second << "\n";
            }
            else {
                out << e.second << " " << e.first << "\n";
            }
        }
    } else {
        out << "0\n";
    }
}