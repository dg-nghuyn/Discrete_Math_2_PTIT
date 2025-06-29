/*Developed by Duong Ngoc Huyen - HuyenDTN.B23AT139 - PTIT*/

#include<bits/stdc++.h>
#define MAX 1005
using namespace std;

int t, n, A[MAX][MAX];
int B[MAX], C[MAX] = {0}, cnt;

ofstream out ("DT.OUT");

void Init() {
    ifstream in ("DT.INP");

    in >> t;
    in >> n;
    
    cnt = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            in >> A[i][j];
            C[i] += A[i][j];
        }
    }
}

void Solve1() {
    int cnt;
    for (int i = 1; i <= n; i++) {
        out << C[i] << " ";
    }
    out << endl;
}

void Solve2() {
    out << n << endl;
    for (int i = 1; i <= n; i++) {
        out << C[i] << " ";
        for (int j = 1; j <= n; j++) {
            if (A[i][j] == 1) {
                out << j << " ";
            }
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
    return 0;
}