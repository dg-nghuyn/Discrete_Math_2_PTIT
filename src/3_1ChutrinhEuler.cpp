/*Developed by Duong Ngoc Huyen - HuyenDTN.B23AT139 - PTIT*/

#include<bits/stdc++.h>
#define MAX 105
using namespace std;

int t, n, u, A[MAX][MAX];
int check[MAX] = {0};

ofstream out ("CT.OUT");

void Init() {
    ifstream in ("CT.INP");
    in >> t;
    if (t == 1) {
        in >> n;
    }
    else {
        in >> n >> u;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            in >> A[i][j];
        }
    }
}

void BFS(int u) {
    queue<int> q;
    q.push(u);
    check[u] = 1;
    
    while (!q.empty()) {
        int k = q.front();
        q.pop();
        
        for (int i = 1; i <= n; i++) {
            if (A[k][i] == 1 && check[i] == 0) {
                q.push(i);
                check[i] = 1;
            }
        }
    }
}

bool Check_lt() {
    for (int i = 1; i <= n; i++) {
        if (check[i] == 0) {
            return 0;
        }
    }
    return 1;
}

void Solve1() {
    int bac[MAX] = {0}, le = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            bac[i] += A[i][j];
        }
        if (bac[i] % 2 == 1) {
            le++;
        }
    }

    BFS(1);
    if (Check_lt() == 1 && le == 0) {
        out << 1 << endl;
    }
    else if (Check_lt() == 1 && le == 2) {
        out << 2 << endl;
    }
    else out << 0 << endl;
}

void Solve2() {
    stack<int> s;
    vector<int> ce;
    s.push(u);

    while (!s.empty()) {
        int k = s.top();
        int v = -1;

        for (int i = 1; i <= n; i++) {
            if (A[k][i] == 1) {
                v = i;
                s.push(v);
                A[k][i] = 0;
                A[i][k] = 0;
                break;
            }
        }

        if (v == -1) {
            ce.push_back(k);
            s.pop();
        }
    }

    for (int i = ce.size() - 1; i >= 0; i--) {
        out << ce[i] << " ";
    }
    out << endl;
}

int main () {
    Init();
    if (t == 1) {
        Solve1();
    }
    else {
        Solve2();
    }
}