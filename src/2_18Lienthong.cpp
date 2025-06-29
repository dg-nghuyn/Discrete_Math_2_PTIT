/*Developed by Duong Ngoc Huyen - HuyenDTN.B23AT139 - PTIT*/

#include<bits/stdc++.h>
#define MAX 105
using namespace std;

int n, A[MAX][MAX] = {0};
int check[MAX] = {0};

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

void ReInit() {
    for (int i = 1; i <= n; i++) {
        check[i] = 0;
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

bool Check() {
    for (int i = 1; i <= n; i++) {
        if (check[i] == 0) {
            return 0;
        }
    }
    return 1;
}

void Solve() {
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        ReInit();
        BFS(i);
        if (Check() == 1) {
            cnt++;
        }
    }

    if (cnt == n) {
        out << "1" << endl;
    }
    else if (cnt >= 1 ) {
        out << "2" << endl;
    }
    else {
        out << "0" << endl;
    }
}

int main () {
    Init();
    Solve();
}