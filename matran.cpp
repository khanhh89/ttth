#include <iostream>
#include <vector>
using namespace std;

// Hàm tính tích ma tr?n A * A^T
vector<vector<int>> nhanMaTran(const vector<vector<int>> &A, const vector<vector<int>> &AT) {
    int n = A.size();
    int m = AT[0].size();
    vector<vector<int>> C(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < AT.size(); k++) {
                C[i][j] += A[i][k] * AT[k][j];
            }
        }
    }
    return C;
}

// Hàm chuy?n v? ma tr?n
vector<vector<int>> chuyenVi(const vector<vector<int>> &A) {
    int n = A.size();
    int m = A[0].size();
    vector<vector<int>> AT(m, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            AT[j][i] = A[i][j];
        }
    }
    return AT;
}

// Hàm in ma tr?n
void inMaTran(const vector<vector<int>> &mat) {
    for (const auto &row : mat) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cout << "Nhap so bo test: ";
    cin >> t;

    for (int test = 1; test <= t; test++) {
        int n, m;
        cout << "\nNhap kich thuoc ma tran (n m): ";
        cin >> n >> m;

        vector<vector<int>> A(n, vector<int>(m));

        cout << "Nhap ma tran A:\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> A[i][j];
            }
        }

        // Tính chuy?n v? c?a A
        vector<vector<int>> AT = chuyenVi(A);

        // Tính tích c?a A và A^T
        vector<vector<int>> C = nhanMaTran(A, AT);

        // In k?t qu?
        cout << "Test " << test << ":\n";
        inMaTran(C);
    }

    return 0;
}
