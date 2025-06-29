//Khong dung vao ra file dau nhe

#include<bits/stdc++.h>
#define MAX 105
using namespace std;

int n, u, c[MAX][MAX];
int check[MAX] = {0}, X[MAX] = {0};
vector<int> res;
int sum = 100000;

void Init() {
    cin >> n >> u;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> c[i][j];
        }
    }

    X[1] = u;
    check[u] = 1;
}

void Result() {
    int tmp = 0;
    for (int i = 1; i < n; i++) {
        tmp += c[X[i]][X[i + 1]];
    }
    tmp += c[X[n]][X[1]];

    if (tmp < sum) {
        sum = tmp;
        res.clear();
        for (int i = 1; i <= n; i++) {
            res.push_back(X[i]);
        }
        res.push_back(X[1]);
    }
}

void Hamilton(int k) {
    for (int i = 1; i <= n; i++) {
        if (c[X[k-1]][i] != 10000 && c[X[k-1]][i] != 0) {
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

    if (sum == 100000) {
        cout << "0" << endl;
    }
    else {
        cout << sum << endl;
        for (auto x : res) {
            cout << x << " ";
        }
        cout << endl;
    }
}