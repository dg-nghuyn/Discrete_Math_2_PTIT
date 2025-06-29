/*Developed by Duong Ngoc Huyen - HuyenDTN.B23AT139 - PTIT*/

#include<bits/stdc++.h>
#define MAX 205
using namespace std;

struct Edge {
    int dau, cuoi, tso;
};

int t, n, m;
Edge e[MAX] = {0};

ofstream out ("DT.OUT");

void Init() {
    ifstream in ("DT.INP");
    in >> t;
    in >> n >> m;
    for (int i = 1; i <= m; i++) {
        in >> e[i].dau >> e[i].cuoi >> e[i].tso;
    }
}

void Solve1() {
    int bbr[MAX] = {0}, bbv[MAX] = {0};
    for (int i = 1; i <= m; i++) {
        bbr[e[i].dau]++;
        bbv[e[i].cuoi]++;
    }

    for (int i = 1; i <= n; i++) {
        out << bbv[i] << " " << bbr[i] << endl;
    }
}

void Solve2() {
    int c[MAX][MAX];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            c[i][j] = 10000;
        }
    }

    for (int i = 1; i <= m; i++) {
        c[e[i].dau][e[i].cuoi] = e[i].tso;
    }

    out << n << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == i) {
                c[i][j] = 0;
            }
            out << c[i][j] << " ";
        }
        out << endl;
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