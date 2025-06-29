/*Developed by Duong Ngoc Huyen - HuyenDTN.B23AT139 - PTIT*/

#include<bits/stdc++.h>
#define MAX 105
using namespace std;

int t, n, u, A[MAX][MAX];
vector<int> check(MAX);

ofstream out ("CT.OUT");

void Init() {
    ifstream in ("CT.INP");
    in >> t;
    if (t == 1) {
        in >> n;
    }
    else {
        in >> n >> u;
    }
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

void BFS(int u) {
    queue<int> q;
    q.push(u);
    check[u] = 1;

    while (!q.empty()) {
        int k = q.front();
        q.pop();

        for (int i = 1; i <= n; i++) {
            if (A[k][i] == 1 && check[i] == 0) {
                q.push(i);
                check[i] = 1;
            }
        }
    }
}

bool Check() {
    for (int i = 1; i <= n; i++) {
        if (check[i] == 0) {
            return 0;
        }
    }
    return 1;
}

bool Check_lty() {
    for (int i = 1; i <= n; i++) {
        ReInit();
        BFS(i);
        if (Check() == 1) {
            return 1;
        }
    }
    return 0;
}

void Solve1() {
    int bbr[MAX] = {0}, bbv[MAX] = {0};

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            bbr[i] += A[i][j];
            bbv[i] += A[j][i];
        }
    }

    int a = 0, b = 0;
    for (int i = 1; i <= n; i++) {
        if (bbr[i] - bbv[i] == 1) {
            a++;
        }
        else if (bbv[i] - bbr[i] == 1){
            b++;
        }
        else if (bbv[i] != bbr[i]) {
            out << "0" << endl;
            return;
        }
    }

    if (a == 0 && b == 0 && Check_lty() == 1) {
        out << "1" << endl;
    }
    else if (a == 1 && b == 1 && Check_lty() == 1) {
        out << "2" << endl;
    }
    else out << "0" << endl;
}

void Solve2() {
    stack<int> s;
    vector<int> ce;
    s.push(u);

    while (!s.empty()) {
        int k = s.top();
        int v = -1;

        for (int i = 1; i <= n; i++) {
            if (A[k][i] == 1) {
                v = i;
                s.push(v);
                A[k][i] = 0;
                break;
            }
        }

        if (v == -1) {
            ce.push_back(k);
            s.pop();
        }
    }

    for (int i = ce.size() - 1; i >= 0; i--) {
        out << ce[i] << " ";
    }
    out << endl;
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
