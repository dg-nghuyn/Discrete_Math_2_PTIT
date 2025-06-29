/*Developed by Duong Ngoc Huyen - HuyenDTN.B23AT139 - PTIT*/

#include<bits/stdc++.h>
using namespace std;

ifstream in ("DN.INP");
ofstream out ("DN.OUT");

int n;
int c[105][105];
int truoc[105][105], d[105][105];

void Init() {
    in >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            in >> c[i][j];
        }
    }
}

void Floyd() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            d[i][j] = c[i][j];;
            if (c[i][j] != 10000 && c[i][j] != 0) {
                truoc[i][j] = i;
            }
            else {
                truoc[i][j] = 0;
            }
        }
    }

    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (d[i][j] > d[i][k] + d[k][j]) {
                    d[i][j] = d[i][k] + d[k][j];
                    truoc[i][j] = truoc[k][j];
                }
            }
        }
    }
}

void find(int u, int v, vector<int> &res) {
    if (u == v) {
        res.push_back(u);
        return;
    }
    find(u, truoc[u][v], res);
    res.push_back(v);
}

void Result() {
    int a = 0, b = 0;
    int tmp = -1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i != j && d[i][j] < 10000) {
                if (d[i][j] > tmp || d[i][j] == tmp && (i < a || (i == a && j < b))) {
                    tmp = d[i][j];
                    a = i;
                    b = j;
                }
            }
            
        }
    }

    if (tmp == -1) {
        out << "0" << endl;
    }
    out << a << " " << b << " " << d[a][b] << endl;

    vector<int> res;
    find(a, b, res);
    for (int x : res) {
        out << x << " ";
    } 
    out << endl;
}

int main () {
    Init();
    Floyd();
    Result();
}