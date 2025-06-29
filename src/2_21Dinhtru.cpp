/*Developed by Duong Ngoc Huyen - HuyenDTN.B23AT139 - PTIT*/

#include<bits/stdc++.h>
#define MAX 105
using namespace std;

int n, A[MAX][MAX];
int check[MAX] = {0};
int lt = 0;

ofstream out ("TK.OUT");

void Init () {
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

void DFS (int u) {
    stack<int> s;
    s.push(u);
    check[u] = 1;

    while (!s.empty()) {
        int k = s.top();
        s.pop();

        for (int i = 1; i <= n; i++) {
            if (A[k][i] == 1 && check[i] == 0) {
                s.push(k);
                s.push(i);
                check[i] = 1;
                break;
            }
        }
    }
}

void Demlt() {
    ReInit();
    for (int i = 1; i <= n; i++) {
        if (check[i] == 0) {
            lt++;
            DFS(i);
        }
    }
}

void Duyetdinhtru () {
    int tmp;
    vector<int> res;
    
    for (int i = 1; i <= n; i++) {
        ReInit();
        check[i] = 1;

        tmp = 0;
        for (int j = 1; j <= n; j++) {
            if (j != i && check[j] == 0) {
                DFS(j);
                tmp++;
            }
        }

        if (tmp > lt) {
            res.push_back(i);
        }
    }

    out << res.size() << endl;
    if (res.size() >= 1) {
        sort(res.begin(), res.end());
        for (int x : res) {
            out << x << " ";
        }
        out << endl;
    }
}

int main () {
    Init();
    Demlt();
    Duyetdinhtru();
}

/*
13
0 1 1 0 0 0 0 0 0 0 0 0 0
1 0 0 1 0 1 0 0 0 0 0 0 0
1 0 0 1 0 0 0 0 0 0 0 0 0
0 1 1 0 0 1 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 1 1 0 0 0
0 1 0 1 0 0 1 0 0 0 0 0 0
0 0 0 0 0 1 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 1 0 0 0
0 0 0 0 1 0 0 0 0 0 0 0 0
0 0 0 0 1 0 0 1 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 1 1
0 0 0 0 0 0 0 0 0 0 1 0 1
0 0 0 0 0 0 0 0 0 0 1 1 0
*/