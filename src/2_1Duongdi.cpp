/*Developed by Duong Ngoc Huyen - HuyenDTN.B23AT139 - PTIT*/

#include<bits/stdc++.h>
#define MAX 205
using namespace std;

int t, n, u, v;
int A[MAX][MAX] = {0};
int check[MAX] = {0}, truoc[MAX] = {0};

ofstream out ("TK.OUT");

void Init() {
    ifstream in ("TK.INP");
    in >> t;
    in >> n >> u >> v;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            in >> A[i][j];
        }
    }
}

void DFS(int u) {
    stack<int> s;
    s.push(u);
    check[u] = 1;
    while(!s.empty()) {
        int k = s.top();
        s.pop();
        for (int i = 1; i <= n; i++) {
            if (A[k][i] == 1 && check[i] == 0) {
                s.push(k);
                s.push(i);
                check[i] = 1;
                truoc[i] = k;
                break;
            }
        }
    }
}

void Duongdi(int u, int v) {
    if (truoc[v] == 0) {
        out << "0" << endl;
        return;
    }
    else {
        stack<int> res;
        res.push(v);
        int tmp = truoc[v];
        while (tmp != u) {
            res.push(tmp);
            tmp = truoc[tmp];
        }
        res.push(u);

        while (!res.empty()) {
            int k = res.top();
            out << k << " ";
            res.pop();
        }
    }
}

void Solve1() {
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (A[u][i] == 1 && A[i][v] == 1) {
            cnt++;
        }
    }
    out << cnt << endl;
}

void Solve2() {
    DFS(u);
    Duongdi(u, v);
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