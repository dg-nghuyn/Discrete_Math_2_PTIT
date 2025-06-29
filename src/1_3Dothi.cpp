/*Developed by Duong Ngoc Huyen - HuyenDTN.B23AT139 - PTIT*/

#include<bits/stdc++.h>
#define MAX 1005
using namespace std;

int t, n, A[MAX][MAX] = {0};
int bac[MAX] = {0};

ofstream out ("DT.OUT");

void Init () {
    ifstream in ("DT.INP");
    in >> t;
    in >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            in >> A[i][j];
            bac[i] += A[i][j];
        }
    }
}

void Solve1 () {
    for (int i = 1; i <= n; i++) {
        out << bac[i] << " ";
    }
    out << endl;
}

void Solve2 () {
    int B[MAX][MAX] = {0};
    int tmp = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (A[i][j] == 1) {
                tmp++;
                B[i][tmp] = 1;
                B[j][tmp] = 1;
            }
        }
    }

    out << n << " " << tmp << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= tmp; j++) {
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