#include <bits/stdc++.h>
using namespace std;

int fib(int n) {
    if (n == 0 || n == 1) return n;
    else return fib(n - 2) + fib(n - 1);
}

int tongChuSo(int n) {
    if (n < 10) return n;
    else return n % 10 + tongChuSo(n / 10);
}

int demChuSo(int n) {
    if (n < 10) return 1;
    else return 1 + demChuSo(n / 10);
}

int daoNguoc(int n, int result = 0) {
    if (n == 0) return result;
    else {
        result = result * 10 + n % 10;
        return daoNguoc(n / 10, result);
    }
}

int luyThua(int a, int n) {
    if (n == 0) return 1;
    else if (n == 1) return a;
    else if (n % 2 == 0) {
        int ans = luyThua(a, n / 2);
        return ans * ans;
    }
    else return a * luyThua(a, n - 1);
}

int ucln(int a, int b) {
    if (a == b) return a;
    else if (a % b == 0) return b;
    else if (b % a == 0) return a;
    else return ucln(b, a % b);
}

int bcnn(int a, int b) {
    if (a == b) return a;
    else if (a % b == 0) return a;
    else if (b % a == 0) return b;
    else {
        int ans = b / ucln(a, b);
        return ans * a;
    } 
}

int main() {
    int choice = - 1;
    while (choice) {
        cout << "\n=== MENU ===\n";
        cout << "1. In day Fibonacci den n\n";
        cout << "2. Tinh tong cac chu so cua mot so\n";
        cout << "3. Dem so chu so va dao nguoc mot so\n";
        cout << "4. Tinh luy thua\n";
        cout << "5. Tim UCLN va BCNN\n";
        cout << "0. Thoat chuong trinh.\n";
        cout << "\n";

        cout << "Chay chuong trinh: "; cin >> choice;
    
        switch (choice) {
            case 1: {
                int n;
                cout << "\nNhap so nguyen n (khong am): "; cin >> n;
                while (n < 0) {
                    cout << "n phai la so khong am!\n";
                    cout << "Nhap so nguyen n (khong am): "; cin >> n;
                }

                cout << "Day Fibonacci khong vuot qua " << n << " la: ";
                for (int i = 0; fib(i ) <= n; i++) cout << fib(i) << " ";
                break;
            }
            case 2: {
                int n;
                cout << "\nNhap so nguyen duong n can tinh: "; cin >> n;
                while(n <= 0) {
                    cout << "n phai la so nguyen duong!\n";
                    cout << "Nhap so nguyen duong n can tinh: "; cin >> n;
                }

                cout << "Tong cac chu so cua " << n << " la: " << tongChuSo(n);
                break;
            }
            case 3: {
                int n;
                cout << "\nNhap so nguyen duong n: "; cin >> n;
                while (n <= 0) {
                    cout << "n phai la so nguyen duong!\n";
                    cout << "Nhap so nguyen duong n: "; cin >> n;
                }
                cout << "So chu so cua " << n << " la: " << demChuSo(n);
                cout << "\nSo dao nguoc cua " << n << " la: " << daoNguoc(n);
                break;
            }
            case 4: {
                int a, n;
                cout << "\nNhap so nguyen a: "; cin >> a;
                cout << "Nhap so mu (khong am) cua a: "; cin >> n;
                while (n < 0) {
                    cout << "So mu phai la mot so nguyen khong am!\n";
                    cout << "Nhap so mu (khong am) cua a: "; cin >> n;
                }
                cout << "Ket qua cua" << a << "^" << n << " la:" << luyThua(a, n);
                break;
            }
            case 5: {
                int a, b;
                cout << "\nNhap so nguyen a: "; cin >> a;
                cout << "Nhap so nguyen b: "; cin >> b;
                cout << "Uoc chung lon nhat cua " << a << " va " << b << " la: " << ucln(a, b);
                cout << "\nBoi chung nho nhat cua " << a << " va " << b << " la: " << bcnn(a, b);
                break;
            }
            case 0: {
                cout << "\nDang thoat chuong trinh...";
                return 0;
                break;
            }
            default: break;
        }
    }
}