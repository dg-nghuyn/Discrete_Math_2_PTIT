/*Developed by Duong Ngoc Huyen - HuyenDTN.B23AT139 - PTIT*/

#include<bits/stdc++.h>
using namespace std;

struct Data {
    int u, v, w;
};

bool cmp (const Data &a, const Data &b) {
    if (a.w == b. w) {
        if (a.u == b.u) {
            return a.v < b.v;
        }
        return a.u < b.u;
    }
    return a.w < b.w;
}

int n, m, d = 0;
vector<Data> A, T;
vector<int> p;

ifstream in ("CK.INP");
ofstream out ("CK.OUT");

void make_set() {
    for (int i = 1; i <= n; i++) {
        p[i] = i;
    }
}

int find_set(int v) {
    if (v == p[v]) {
        return v;
    }
    return p[v] = find_set(p[v]);
}

void union_sets(int u, int v) {
    int a = find_set(u);
    int b = find_set(v);

    if (a != b) {
        p[b] = a; // neu u va v o 2 tap khac nhau, hop nhat
    }
}

void Kruskal() {
    int cnt = 0;

    for (int i = 0; i < m; i++) {
        int a = A[i].u;
        int b = A[i].v;
        int c = A[i].w;

        if (find_set(a) != find_set(b)) {
            T.push_back({a, b, c});

            d += c;
            union_sets(a, b);
            cnt++;

            if (cnt == n - 1) {
                break;
            }
        }
    }

    out << d << endl;
    for (auto x : T) {
        out << x.u << " " << x.v << " " << x.w << endl;
    }
}

int main () {
    in >> n >> m;

    A.resize(m);
    p.resize(n + 1);

    for (int i = 0; i < m; i++) {
        in >> A[i].u >> A[i].v >> A[i].w;
    }
    sort (A.begin(), A.end(), cmp);

    make_set();
    Kruskal();
}