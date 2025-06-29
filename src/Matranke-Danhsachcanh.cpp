#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ifstream fin("DT.INP");
    ofstream fout("DT.OUT");

    int t;
    cin >> t; // Loại tác vụ
    int n;
    cin >> n; // Số lượng đỉnh trong đồ thị

    int a[n + 1][n + 1], b[n + 1][n + 1];

    // Đọc ma trận kề và sao lưu
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }

    // Tác vụ 1: Tính bậc của từng đỉnh
    if (t == 1) {
        for (int i = 1; i <= n; i++) {
            int cnt = 0; // Đếm số lượng cạnh nối với đỉnh i
            for (int j = 1; j <= n; j++) {
                cnt += a[i][j];
            }
            cout << cnt << " "; // Xuất bậc của từng đỉnh
        }
    } 
    // Tác vụ 2: Đếm số cạnh và liệt kê các cạnh
    else {
        int dem = 0; // Biến đếm số lượng cạnh

        // Xóa cạnh trong ma trận kề và đếm
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (a[i][j] == 1) {
                    dem++;
                    a[i][j] = 0;
                    a[j][i] = 0;
                }
            }
        }

        // Xuất số đỉnh và số cạnh
        cout << n << " " << dem << endl;

        // Liệt kê danh sách các cạnh từ ma trận ban đầu
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (b[i][j] == 1) {
                    cout << i << " " << j << endl;
                    b[i][j] = 0; // Loại bỏ cạnh để tránh trùng lặp
                    b[j][i] = 0;
                }
            }
        }
    }

    return 0;
}