#include <iostream>
#include <sstream>
#include <cctype>
#include <string>
using namespace std;


string chuanHoaTu(const string &tu) {
    string result = tu;
    if (!result.empty()) {
        result[0] = toupper(result[0]); 
        for (size_t i = 1; i < result.size(); i++) {
            result[i] = tolower(result[i]); 
        }
    }
    return result;
}
string chuanHoaHoTen(const string &hoTen) {
    stringstream ss(hoTen);
    string tu, ketQua;
    while (ss >> tu) {  
	     if (!ketQua.empty()) ketQua += " "; 
        ketQua += chuanHoaTu(tu);
    }
    return ketQua;
}

int main() {
    int soBoTest;
    cout << "Nhap so bo test: ";
    cin >> soBoTest;
    cin.ignore(); 

    for (int i = 0; i < soBoTest; i++) {
        string hoTen;
        cout << "Nhap ho ten: ";
        getline(cin, hoTen); 
        cout << chuanHoaHoTen(hoTen) << endl;
    }

    return 0;
}
