/*Developed by Duong Ngoc Huyen - HuyenDTN.B23AT139 - PTIT*/

#include<bits/stdc++.h>
#define MAX 1005
using namespace std;

int t, n;
int C[MAX] = {0}, B[MAX][MAX] = {0};

ofstream out ("DT.OUT");

void Init() {
    ifstream in ("DT.INP");
    in >> t;
    in >> n;
    int tmp;
    for (int i = 1; i <= n; i++) {
        in >> C[i];
        for (int j = 1; j <= C[i]; j++) {
            in >> tmp;
            B[i][tmp] = 1;
            B[tmp][i] = 1;
        }
    }
}

void Solve1() {
    int cnt;
    for (int i = 1; i <= n; i++) {
        cnt = 0;
        for (int j = 1; j <= n; j++) {
            cnt += B[i][j];
        }
        out << cnt << " ";
    }
    out << endl;
}

void Solve2() {
    out << n << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
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