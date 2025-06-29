/*Developed by Duong Ngoc Huyen - HuyenDTN.B23AT139 - PTIT*/

#include<bits/stdc++.h>
#define INF 1000000
using namespace std;

ifstream in("DN.INP");
ofstream out("DN.OUT");

int n, s, t;
int c[105][105];
int d[105], truoc[105];
bool check[105];

void Init() {
    in >> n >> s >> t;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            in >> c[i][j];
        }
    }
}

int find_min() {
    int u = -1;
    int tmp = INF;
    for (int v = 1; v <= n; v++) {
        if (!check[v] && d[v] < tmp) {
            tmp = d[v];
            u = v;
        }
    }
    return u;
}

void Dijkstra() {
    for (int v = 1; v <= n; v++) {
        d[v] = c[s][v];
        if (c[s][v] == 10000 || c[s][v] == 0) {
            truoc[v] = 0;
        }
        else {
            truoc[v] = s;
        }
        check[v] = false;
    }

    d[s] = 0;
    check[s] = true;

    while (true) {
        int u = find_min();
        if (u == -1) break;

        check[u] = true;

        for (int v = 1; v <= n; v++) {
            if (!check[v] && c[u][v] != 10000 && c[u][v] != 0 && d[u] + c[u][v] < d[v]) {
                d[v] = d[u] + c[u][v];
                truoc[v] = u;
            }
        }
    }
}

void Result() {
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

int main() {
    Init();
    Dijkstra();
    Result();
    return 0;
}
