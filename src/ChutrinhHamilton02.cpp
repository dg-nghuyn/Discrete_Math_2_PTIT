//Code vo huong moi dung 

#include<bits/stdc++.h>
#define MAX 105
using namespace std;

int n, m, u;
int A[MAX][MAX] = {0};
int X[MAX] = {0}, check[MAX] = {0};
vector<vector<int>> res;

void Init() {
    cin >> n >> m >> u;
    int a, b;
    for (int i = 1; i <= m; i++) {
        cin >> a >> b;
        A[a][b] = 1;
        A[b][a] = 1;
    }

    X[1] = u;
    check[u] = 1;
}

void Result() {
    vector<int> tmp;
    for (int i = 1; i <= n; i++) {
        tmp.push_back(X[i]);
    }
    tmp.push_back(X[1]);

    res.push_back(tmp);
}

void Hamilton(int a) {
    for (int i = 1; i <= n; i++) {
        if (A[X[a - 1]][i] == 1) {
            if (a == n + 1 && X[1] == i) {
                Result();
            }
            else if (check[i] == 0) {
                X[a] = i;
                check[i] = 1;
                Hamilton(a + 1);
                check[i] = 0;
            }
        }
    }
}

int main () {
    Init();
    Hamilton(2);
    cout << res.size() << endl;
    if (res.size() >= 1) {
        for (auto x : res) {
            for (auto a : x) {
                cout << a << " ";
            }
            cout << endl;
        }
    }
}