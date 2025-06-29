/*Developed by Duong Ngoc Huyen - HuyenDTN.B23AT139 - PTIT*/

#include<bits/stdc++.h>
#define MAX 205
using namespace std;

struct Edge {
    int dau, cuoi;
};

int t, n, A[MAX][MAX] = {0};

ofstream out ("DT.OUT");

void Init() {
    ifstream in ("DT.INP");
    in >> t;
    in >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            in >> A[i][j];
        }
    }
}

void Solve1() {
    int cnt;
    for (int i = 1; i <= n; i++) {
        cnt = 0;
        for (int j = 1; j <= n; j++) {
            cnt += A[i][j];
        }
        out << cnt << " ";
    }
    out << endl;
}

void Solve2() {
    Edge e[MAX];
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (A[i][j] == 1) {
                cnt++;
                e[cnt].dau = i;
                e[cnt].cuoi = j;
            }
        }
    }

    out << n << " " << cnt << endl;
    for (int i = 1; i <= cnt; i++) {
        out << e[i].dau << " " << e[i].cuoi << endl;
    }
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
