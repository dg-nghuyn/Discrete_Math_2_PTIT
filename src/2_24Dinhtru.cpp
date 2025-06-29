/*Developed by Duong Ngoc Huyen - HuyenDTN.B23AT139 - PTIT*/

#include<bits/stdc++.h>
#define MAX 105
using namespace std;

int n, A[MAX][MAX];
int check[MAX] = {0}, lt = 0;

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
                check[i] = 1;
                q.push(i);
            }
        }
    }
}

void Demlt() {
    ReInit();
    for (int i = 1; i <= n; i++) {
        if (check[i] == 0) {
            BFS(i);
            lt++;
        }
    }
}

void Duyetdinhtru() {
    int tmp;
    vector<int> res;

    for (int i = 1; i <= n; i++) {
        ReInit();
        check[i] = 1;

        tmp = 0;
        for (int j = 1; j <= n; j++) {
            if (j != i && check[j] == 0) {
                BFS(j);
                tmp++;
            }
        }

        if (tmp > lt) {
            res.push_back(i);
        }
    }

    out << res.size() << endl;
    for (int x : res) {
        out << x << " ";
    }
    out << endl;
}

int main () {
    Init();
    Demlt();
    Duyetdinhtru();
}