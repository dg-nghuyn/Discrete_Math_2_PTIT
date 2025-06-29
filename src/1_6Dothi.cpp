/*Developed by Duong Ngoc Huyen - HuyenDTN.B23AT139 - PTIT*/

# include<bits/stdc++.h>
#define MAX 205
using namespace std;

struct Edge {
    int dau, cuoi;
};

int t, n, m;
int bac[MAX] = {0};
Edge A[MAX];

ofstream out ("DT.OUT");

void Init() {
    ifstream in ("DT.INP");
    in >> t;
    in >> n >> m;
    for (int i = 1; i <= m; i++) {
        in >> A[i].dau >> A[i].cuoi;
        bac[A[i].dau]++;
        bac[A[i].cuoi]++;
    }
}

void Solve1() {
    for (int i = 1; i <= n; i++) {
        out << bac[i] << " ";
    }
    out << endl;
}

void Solve2() {
    out << n << " " << m << endl;

    int B[n + 5][m + 5] = {0};
    int t = 0;
    for (int i = 1; i <= m; i++) {
        t++;
        B[A[i].dau][t] = 1;
        B[A[i].cuoi][t] = 1;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            out << B[i][j] << " ";
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