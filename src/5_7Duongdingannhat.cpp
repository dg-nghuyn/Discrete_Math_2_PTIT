/*Developed by Duong Ngoc Huyen - HuyenDTN.B23AT139 - PTIT*/

#include<bits/stdc++.h>
using namespace std;

ifstream in ("BN.INP");
ofstream out ("BN.OUT");

int n, s, t;
int c[105][105], d[105], truoc[105];
bool flag = false;

void Init() {
    in >> n >> s >> t;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            in >> c[i][j];
        }
    }
}

void BellmanFord() {
    for (int v = 1; v <= n; v++) {
        d[v] = c[s][v];
        if (c[s][v] == 10000 || c[s][v] == 0) {
            truoc[v] = 0;
        }
        else {
            truoc[v] = s;
        }
    }

    d[s] = 0;
    truoc [s] = 0;
    int k = 1;

    for (int k = 1; k <= n - 2; k++) {
        for (int v = 1; v <= n; v++) {
            if (v == s) continue;
            for (int u = 1; u <= n; u++) {
                if (c[u][v] != 0 && c[u][v] != 10000 && d[u] + c[u][v] < d[v]) {
                    d[v] = d[u] + c[u][v];
                    truoc[v] = u;
                }
            }
        }
    }

    for (int u = 1; u <= n; u++) {
        for (int v = 1; v <= n; v++) {
            if (c[u][v] != 10000 && c[u][v] != 0 && d[u] + c[u][v] < d[v]) {
                flag = true;
                return;
            }
        }
    }
}

void Result() {
    if (flag) {
        out << "-1" << endl;
        return;
    }

    if (truoc[t] == 0) {
        out << 0 << endl;
        return;
    }

    vector<int> res;
    for (int v = t; v != 0; v = truoc[v]) {
        res.push_back(v);
        if (v == s) break;
    }

    reverse(res.begin(), res.end());

    out << d[t] << endl;
    for (int v : res) {
        out << v << " ";
    }
    out << endl;
}

int main () {
    Init();
    BellmanFord();
    Result();
}