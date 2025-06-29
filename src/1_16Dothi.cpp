/*Developed by Duong Ngoc Huyen - HuyenDTN.B23AT139 - PTIT*/

#include<bits/stdc++.h>
#define MAX 1005
using namespace std;

struct Edge {
    int dau, cuoi;
};

int t, n, m;
Edge A[MAX];
int bbr[MAX] = {0}, bbv[MAX] = {0};

ofstream out ("DT.OUT");

void Init() {
    ifstream in ("DT.INP");
    in >> t;
    in >> n >> m;
    for (int i = 1; i <= m; i++) {
        in >> A[i].dau >> A[i].cuoi;
        bbr[A[i].dau]++;
        bbv[A[i].cuoi]++;
    }
}

void Solve1() {
    for (int i = 1; i <= n; i++) {
        out << bbv[i] << " " << bbr[i] << endl;
    }
}

void Solve2() {
    out << n << endl;
    for (int i = 1; i <= n; i++) {
        out << bbr[i] << " ";
        for (int j = 1; j <= m; j++) {
            if (A[j].dau == i) {
                out << A[j].cuoi << " ";
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
}