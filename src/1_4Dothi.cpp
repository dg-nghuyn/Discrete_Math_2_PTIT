/*Developed by Duong Ngoc Huyen - HuyenDTN.B23AT139 - PTIT*/

#include<bits/stdc++.h>
#define MAX 1005
using namespace std;

struct Edge{
    int dau, cuoi;
};

int t, n, m;
Edge A[MAX + 5];
int C[MAX] = {0}, B[MAX][MAX] = {0};

ofstream out ("DT.OUT");

void Init() {
    ifstream in ("DT.INP");
    in >> t;
    in >> n >> m;
    for (int i = 1; i <= m; i++) {
        in >> A[i].dau >> A[i].cuoi;
        C[A[i].dau]++;
        C[A[i].cuoi]++;
    }
}

void Solve1() {
    for (int i = 1; i <= n; i++) {
        out << C[i] << " ";
    }
    out << endl;
}

void Solve2() {
    for (int i = 1; i <= m; i++) {
        B[A[i].dau][A[i].cuoi] = 1;
        B[A[i].cuoi][A[i].dau] = 1; 
    }

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