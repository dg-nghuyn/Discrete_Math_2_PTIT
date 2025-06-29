/*Developed by Duong Ngoc Huyen - HuyenDTN.B23AT139 - PTIT*/

#include<bits/stdc++.h>
#define MAX 205
using namespace std;

int n, A[MAX][MAX] = {0};
int check[MAX] = {0};
vector<vector<int>> lt;

ofstream out ("TK.OUT");

void Init() {
    ifstream in ("TK.INP");
    in >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            in >> A[i][j];
        }
    }
}

void DFS(int u) {
    vector<int> tmp;

    stack<int> s;
    s.push(u);
    check[u] = 1;
    tmp.push_back(u);

    while (!s.empty()) {
        int k = s.top();
        s.pop();

        for (int i = 1; i <= n; i++) {
            if (A[k][i] == 1 && check[i] == 0) {
                s.push(k);
                s.push(i);
                check[i] = 1;
                tmp.push_back(i);
                break;
            }
        }
    }
    lt.push_back(tmp);
}

void Solve() {
    for (int i = 1; i <= n; i++) {
        if (check[i] == 0) {
            DFS(i);
        }
    }

    out << lt.size() << endl;
    for (auto tmp : lt) {
        sort(tmp.begin(), tmp.end());
        for (int x : tmp) {
            out << x << " ";
        }
        out << endl;
    }
}
 
int main () {
    Init();
    Solve();
}