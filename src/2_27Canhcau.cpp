/*Developed by Duong Ngoc Huyen - HuyenDTN.B23AT139 - PTIT*/

#include<bits/stdc++.h>
#define MAX 105
using namespace std;

int n, A[MAX][MAX] = {0};
int lt = 0, check[MAX] = {0};

ofstream out ("TK.OUT");

void Init() {
    ifstream in ("TK.INP");
    in >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            in >> A[i][j];
        }
    }
}

void ReInit() {
    for (int i = 1; i <= n; i++) {
        check[i] = 0;
    }
}

void DFS(int u) {
    stack<int> s;
    s.push(u);
    check[u] = 1;
    while (!s.empty()) {
        int k = s.top();
        s.pop();
        for (int j = 1; j <= n; j++) {
            if (A[k][j] == 1 && check[j] == 0) {
                s.push(k);
                s.push(j);
                check[j] = 1;
                break;
            }
        }
    }
}

void Demlt() {
    ReInit();
    for (int i = 1; i <= n; i++) {
        if (check[i] == 0) {
            DFS(i);
            lt++;
        }
    }
}

void Duyetcanhcau() {
    vector<pair<int, int>> res;
    int tmp;

    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (A[i][j] == 1) {
                A[i][j] = 0;
                A[j][i] = 0;

                tmp = 0;
                ReInit();
                for (int i = 1; i <= n; i++) {
                    if (check[i] == 0) {
                        DFS(i);
                        tmp++;
                    }
                }

                if (tmp > lt) {
                    res.push_back({i, j});
                }

                A[i][j] = 1;
                A[j][i] = 1;
            }
        }
    }

    sort(res.begin(), res.end());
    out << res.size() << endl;
    for (auto x : res) {
        out << x.first << " " << x.second << endl;
    }

}

int main () {
    Init();
    Demlt();
    Duyetcanhcau();
}