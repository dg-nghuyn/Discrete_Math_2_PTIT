/*Developed by Duong Ngoc Huyen - HuyenDTN.B23AT139 - PTIT*/

#include<bits/stdc++.h>
#define MAX 1005
using namespace std;

int t, n;
int ke[MAX] = {0}, C[MAX][MAX] = {0}, D[MAX] = {0};
int A[MAX][MAX] = {0};

ofstream out ("DT.OUT");

void Init() {
    ifstream in ("DT.INP");
    in >> t;
    in >> n;
    for (int i = 1; i <= n; i++) {
        in >> ke[i];
        for (int j = 1; j <= ke[i]; j++) {
            in >> C[i][j];

            D[C[i][j]]++;
            A[i][C[i][j]] = 1;
        }
    }
}

void Solve1() {
    for (int i = 1; i <= n; i++) {
        out << D[i] << " " << ke[i] << endl;
    }
}

void Solve2() {
    out << n << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            out << A[i][j] << " ";
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