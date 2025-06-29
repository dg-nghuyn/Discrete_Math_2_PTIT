/*Developed by Duong Ngoc Huyen - HuyenDTN.B23AT139 - PTIT*/

#include<bits/stdc++.h>
#define MAX 205
using namespace std;

struct Edge {
    int dau, cuoi, tso;
};

int t, n, A[MAX][MAX];

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
    int bbr[MAX] = {0}, bbv[MAX] = {0};
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (A[i][j] != 0 && A[i][j] != 10000) {
                bbr[i]++;
            }
            if (A[j][i] != 0 && A[j][i] != 10000) {
                bbv[i]++;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        out << bbv[i] << " " << bbr[i] << endl;
    }
}

void Solve2() {
    int cnt = 0;
    Edge e[MAX] = {0};
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (A[i][j] != 0 && A[i][j] != 10000) {
                cnt++;
                e[cnt].dau = i;
                e[cnt].cuoi = j;
                e[cnt].tso = A[i][j];
            }
        }
    }

    out << n << " " << cnt << endl;
    for (int i = 1; i <= cnt; i++) {
        out << e[i].dau << " " << e[i].cuoi << " " << e[i].tso << endl;
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