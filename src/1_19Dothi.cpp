/*Developed by Duong Ngoc Huyen - HuyenDTN.B23AT139 - PTIT*/

#include<bits/stdc++.h>
#define MAX 1005
using namespace std;

int t, n, m;
int bbr[MAX] = {0}, bbv[MAX] = {0}, A[MAX][MAX] = {0};

ofstream out ("DT.OUT");

void Init() {
    ifstream in ("DT.INP");
    in >> t;
    in >> n;
    for (int i = 1; i <= n; i++) {
        in >> bbr[i];
        m += bbr[i];
        for (int j = 1; j <= bbr[i]; j++) {
            in >> A[i][j];
            bbv[A[i][j]]++;
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
        for (int j = 1; j <= bbr[i]; j++) {
            out << i << " " << A[i][j] << endl;
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