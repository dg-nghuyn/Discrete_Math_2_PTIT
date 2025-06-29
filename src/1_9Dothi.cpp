/*Developed by Duong Ngoc Huyen - HuyenDTN.B23AT139 - PTIT*/

//Khong dung vao ra file dau nhe //
#include<bits/stdc++.h>
#define MAX 205
using namespace std;

ofstream out ("DT.OUT");
int t, n, ke[MAX] = {0}, A[MAX][MAX] = {0};

void Init() {
    ifstream in ("DT.INP");
    cin >> t;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> ke[i];
        for (int j = 1; j <= ke[i]; j++) {
            cin >> A[i][j];
        }
    }
}

void Solve1() {
    int bac[MAX] = {0};
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= ke[i]; j++) {
            bac[A[i][j]]++;
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << bac[i] << " ";
    }
    cout << endl;
}

void Solve2() {
    int m = 0;
    int B[MAX][MAX] = {0};
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= ke[i]; j++) {
            if (A[i][j] > i) {
                m++;
                B[i][m] = 1;
                B[A[i][j]][m] = 1;
            }
        }
    }

    cout << n << " " << m << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
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