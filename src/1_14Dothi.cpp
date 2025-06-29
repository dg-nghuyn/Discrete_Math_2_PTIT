/*Developed by Duong Ngoc Huyen - HuyenDTN.B23AT139 - PTIT*/

#include<bits/stdc++.h>
#define MAX 205
using namespace std;

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
    int bbr[MAX] = {0}, bbv[MAX] = {0};
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            bbr[i] += A[i][j];
        }
    }

    for (int j = 1; j <= n; j++) {
        for (int i = 1; i <= n; i++) {
            bbv[j] += A[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        out << bbv[i] << " " << bbr[i] << endl;
    }
}

void Solve2() {
    int cnt = 0;
    int c[MAX][MAX];

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (A[i][j] == 1) {
                cnt++;
                c[i][cnt] = 1;
                c[j][cnt] = -1;
            }
        }
    }

    out << n << " " << cnt << endl;
    for  (int i = 1; i <= n; i++) {
        for (int j = 1; j <= cnt; j++) {
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