#include<bits/stdc++.h>
#define MAX 105
using namespace std;

int n, u, A[MAX][MAX];
int check[MAX] = {0}, X[MAX] = {0};
vector<vector<int>> res;

void Init() {
    cin >> n >> u;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> A[i][j];
        }
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

void Hamilton(int k) {
    for (int i = 1; i <= n; i++) {
        if (A[X[k - 1]][i] == 1) {
            if (k == n + 1 && i == X[1]) {
                Result();
            }
            else if (check[i] == 0) {
                X[k] = i;
                check[i] = 1;
                Hamilton(k + 1);
                check[i] = 0;
            }
        }
    }
}

int main () {
    Init();
    Hamilton(2);
    cout << res.size() << endl;
    if (res.size() > 0) {
        for (int i = 0; i < res.size(); i++) {
            for (int x : res[i]) {
                cout << x << " ";
            }
            cout << endl;
        }
    }
}