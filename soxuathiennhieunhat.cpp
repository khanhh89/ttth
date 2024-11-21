#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cout << "Nhap so bo test: ";
    cin >> t;

    for (int test = 1; test <= t; test++) {
        int n;
        cout << "\nNhap so phan tu cua day: ";
        cin >> n;

        vector<int> arr(n);
        unordered_map<int, int> freq; // Ð?m t?n su?t các s?
        vector<int> order; // Ghi l?i th? t? xu?t hi?n ban d?u

        cout << "Nhap day so:\n";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (freq[arr[i]] == 0) {
                order.push_back(arr[i]); // Luu l?i s? l?n d?u xu?t hi?n
            }
            freq[arr[i]]++;
        }

        // Tìm t?n su?t l?n nh?t
        int maxFreq = 0;
        for (const auto &p : freq) {
            maxFreq = max(maxFreq, p.second);
        }

        // In k?t qu?
        cout << "Test " << test << ":\n";
        for (int num : order) {
            if (freq[num] == maxFreq) {
                cout << num << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
