/*Developed by Duong Ngoc Huyen - HuyenDTN.B23AT139 - PTIT*/

#include<bits/stdc++.h>
#define MAX 205
using namespace std;

struct Edge{
    int dau, cuoi, tso;
};

int t, n, c[MAX][MAX] = {0};

ofstream out ("DT.OUT");

void Init() {
    ifstream in ("DT.INP");
    in >> t;
    in >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            in >> c[i][j];
        }
    }
}

void Solve1() {
    int bac[MAX] = {0};
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (c[i][j] != 0 && c[i][j] != 10000) {
                bac[i]++;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        out << bac[i] << " ";
    }
    out << endl;
}

void Solve2() {
    Edge A[MAX] = {0};
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (c[i][j] != 10000 && c[i][j] != 0) {
                cnt++;
                A[cnt].dau = i;
                A[cnt].cuoi = j;
                A[cnt].tso = c[i][j];
            }
        }
    }

    out << n << " " << cnt << endl;
    for (int i = 1; i <= cnt; i++) {
        out << A[i].dau << " " << A[i].cuoi << " " << A[i].tso << endl;
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