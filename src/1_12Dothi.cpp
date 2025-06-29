/*Developed by Duong Ngoc Huyen - HuyenDTN.B23AT139 - PTIT*/

#include<bits/stdc++.h>
#define MAX 1005
using namespace std;

int t, n, A[MAX][MAX] = {0};
int m, bbr[MAX] = {0}, bbv[MAX] = {0};

ofstream out ("DT.OUT");

void Init () {
    ifstream in ("DT.INP");
    in >> t;
    in >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            in >> A[i][j];
            m += A[i][j];
            bbr[i] += A[i][j];
        }
    }

    for (int j = 1; j <= n; j++) {
        for (int i = 1; i <= n; i++) {
            bbv[j] += A[i][j];
        }
    }
}

void Solve1() {
    for (int i = 1; i <= n; i++) {
        out << bbv[i] << " " << bbr[i] << endl;
    }
}

void Solve2() {
    out << n << " " << m << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (A[i][j] == 1) {
                out << i << " " << j << endl;
            }
        }
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