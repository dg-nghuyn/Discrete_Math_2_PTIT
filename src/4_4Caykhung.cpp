/*Developed by Duong Ngoc Huyen - HuyenDTN.B23AT139 - PTIT*/

#include<bits/stdc++.h>
using namespace std;

struct Data {
    int i, j, w;
};

ifstream in ("CK.INP");
ofstream out ("CK.OUT");

int n, s, d = 0, sc = 0;
int c[105][105];
vector<Data> T;
vector<bool> check;

void Prim () {
    check[s] = true;

    while (sc < n - 1) {
        int tmp = INT_MAX;
        int u = -1, v = -1;

        for (int i = 1; i <= n; i++) {
            if (check[i]) {
                for (int j = 1; j <= n; j++) {
                    if (!check[j] && c[i][j] != 0 && c[i][j] != 10000 && c[i][j] < tmp) {
                        tmp = c[i][j];
                        u = i;
                        v = j;
                    }
                }
            }
        }

        if (u == - 1 || v == -1) {
            break;
        }

        check[v] = true;
        if (u < v) {
            T.push_back({u, v, c[u][v]});
        }
        else {
            T.push_back({v, u, c[u][v]});
        }
        d += c[u][v];
        sc++;
    }
}

void Result () {
    if (sc < n - 1) {
        cout << "0" << endl;
    }
    else {
        cout << d << endl;
        for (Data x : T) {
            cout << x.i << " " << x.j << " " << x.w << endl;
        }
    }
}

int main () {
    cin >> n >> s;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> c[i][j];
        }
    }

    check.assign(n + 1, false);
    d = 0;

    Prim();
    Result();
}