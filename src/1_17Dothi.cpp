/*Developed by Duong Ngoc Huyen - HuyenDTN.B23AT139 - PTIT*/

#include<bits/stdc++.h>
#define MAX 205
using namespace std;

struct Edge {
    int v, u;
};

int t, n, m;
Edge e[MAX] = {0};

ofstream out ("DT.OUT");

void Init() {
    ifstream in ("DT.INP");
    in >> t;
    in >> n >> m;
    for (int i = 1; i <= m; i++) {
        in >> e[i].v >> e[i].u;
    }
}

void Solve1() {
    int bbr[MAX] = {0}, bbv[MAX] = {0};
    for (int i = 1; i <= m; i++) {
        bbr[e[i].v]++;
        bbv[e[i].u]++;
    }

    for (int i = 1; i <= n; i++) {
        out << bbv[i] << " " << bbr[i] << endl;
    }
}

void Solve2() {
    int c[MAX][MAX] = {0};

    for (int i = 1; i <= m; i++) {
        c[e[i].v][i] = 1;
        c[e[i].u][i] = -1;
    }

    out << n << " " << m << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
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
    else  {
        Solve2();
    }
}