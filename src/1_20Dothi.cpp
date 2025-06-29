/*Developed by Duong Ngoc Huyen - HuyenDTN.B23AT139 - PTIT*/

#include<bits/stdc++.h>
#define MAX 205
using namespace std;

int t, n;
int ke[MAX] = {0}, A[MAX][MAX] = {0};

ofstream out ("DT.OUT");

void Init() {
    ifstream in ("DT.INP");
    in >> t;
    in >> n;
    for (int i = 1; i <= n; i++) {
        in >> ke[i];
        for (int j = 1; j <= ke[i]; j++) {
            in >> A[i][j];
        }
    }
}

void Solve1() {
    int bbv[MAX] = {0};
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= ke[i]; j++) {
            bbv[A[i][j]]++;
        }
    }

    for (int i = 1; i <= n; i++) {
        out << bbv[i] << " " << ke[i] << endl;
    }
}

void Solve2() {
    int c[MAX][MAX] = {0};
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= ke[i]; j++) {
            cnt++;
            c[i][cnt] = 1;
            c[A[i][j]][cnt] = -1;
        }
    }

    out << n << " " << cnt << endl;
    for (int i = 1; i <= n; i++) {
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