/*Developed by Duong Ngoc Huyen - HuyenDTN.B23AT139 - PTIT*/

#include<bits/stdc++.h>
#define MAX 1005
using namespace std;

int t, n, m, B[MAX] = {0};
int A[MAX][MAX] = {0}, bac[MAX] = {0};

ofstream out ("DT.OUT");

void Init() {
    ifstream in ("DT.INP");
    in >> t;
    in >>  n;
    for (int i = 1; i <= n; i++) {
        in >> B[i];
        for (int j = 1; j <= B[i]; j++) {
            in >> A[i][j];
            bac[A[i][j]]++;
        }
        m += B[i];
    }
}

void Solve1() {
    for (int i = 1; i <= n; i++) {
        out << bac[i] << " ";
    }
    out << endl;
}

void Solve2() {
    out << n << " " << m / 2 << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= B[i]; j++) {
            if (A[i][j] > i) {
                out << i << " " << A[i][j] << endl;
            }
        }
    }
}

int main () {
    ifstream in ("DT.INP");
    Init();
    if (t == 1) {
        Solve1();
    }
    else {
        Solve2();
    }
}
