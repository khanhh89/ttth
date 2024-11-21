#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

struct ThiSinh {
    int ma;              // Mã thí sinh
    string ten;          // Tên thí sinh
    string ngaySinh;     // Ngày sinh
    double diem1;        //  môn 1
    double diem2;        //  môn 2
    double diem3;        //  môn 3
    double tongDiem;     //  tong diem

    ThiSinh(int ma, const string &ten, const string &ngaySinh, double diem1, double diem2, double diem3)
        : ma(ma), ten(ten), ngaySinh(ngaySinh), diem1(diem1), diem2(diem2), diem3(diem3) {
        tongDiem = diem1 + diem2 + diem3;
    }
};

bool cmp(const ThiSinh &a, const ThiSinh &b) {
    if (a.tongDiem != b.tongDiem)
        return a.tongDiem > b.tongDiem;
    return a.ma < b.ma;
}

void nhapThongTin(vector<ThiSinh> &danhSachThiSinh, int n) {
    for (int i = 1; i <= n; i++) {
        string ten, ngaySinh;
        double diem1, diem2, diem3;

        cout << "Nhap ten thi sinh: ";
        getline(cin, ten);
        cout << "Nhap ngay sinh: ";
        getline(cin, ngaySinh);

        do {
            cout << "Nhap diem 3 mon (0-10): ";
            cin >> diem1 >> diem2 >> diem3;
            if (diem1 < 0 || diem1 > 10 || diem2 < 0 || diem2 > 10 || diem3 < 0 || diem3 > 10) {
                cout << "Diem khong hop le! Vui long nhap lai.\n";
            }
        } while (diem1 < 0 || diem1 > 10 || diem2 < 0 || diem2 > 10 || diem3 < 0 || diem3 > 10);

        cin.ignore(); 
        danhSachThiSinh.emplace_back(i, ten, ngaySinh, diem1, diem2, diem3);
    }
}

void inDanhSachThuKhoa(const vector<ThiSinh> &danhSachThiSinh) {
    double diemCaoNhat = danhSachThiSinh[0].tongDiem;
    cout << "\nDanh sach thu khoa:\n";
    cout << setw(5) << "Ma" << setw(20) << "Ten" << setw(15) << "Ngay Sinh" << setw(10) << "Tong Diem\n";
    cout << string(50, '-') << "\n";

    for (const auto &ts : danhSachThiSinh) {
        if (ts.tongDiem == diemCaoNhat) {
            cout << setw(5) << ts.ma
                 << setw(20) << ts.ten
                 << setw(15) << ts.ngaySinh
                 << setw(10) << fixed << setprecision(1) << ts.tongDiem << "\n";
        } else {
            break;
        }
    }
}

int main() {
    int n;
    cout << "Nhap so thi sinh: ";
    cin >> n;
    cin.ignore(); 

    vector<ThiSinh> danhSachThiSinh;
    nhapThongTin(danhSachThiSinh, n);

    sort(danhSachThiSinh.begin(), danhSachThiSinh.end(), cmp);
    inDanhSachThuKhoa(danhSachThiSinh);

    return 0;
}
