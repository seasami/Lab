#include <bits/stdc++.h>
using namespace std;

int demChuSo(int n) {
    if (n < 10) return 1;
    else return 1 + demChuSo(n / 10);
}

bool laPalindrome(int n) {
    if (n < 10) return true;
    else {
        int k = demChuSo(n);
        if (n % 10 != n / (int)(pow(10.0, k - 1))) return false;
        else return laPalindrome(n / 10 % (int)(pow(10.0, k - 2)));
    }   
}

int fib(int n) {
    if (n == 0 || n == 1) return n;
    else return fib(n - 1) + fib(n - 2);
}

int timMax(vector<int> &arr, int n, int i = 0) {
    if (i == n - 1) return arr[i];
    else {
        int maxConLai = timMax(arr, n, i + 1);
        if (arr[i] < maxConLai) return timMax(arr, n, i + 1);
        else return arr[i];
    }
}

void menu(int choice) {
    switch(choice) {
        case 1: {
            cout << "\n=== KIEM TRA SO PALINDROME ===\n";
            int n;
            cout << "Nhap so nguyen duong can kiem tra: "; cin >> n;
            while (n <= 0) {
                cout << "So nhap vao phai la so nguyen duong!\n";
                cout << "Nhap so nguyen duong can kiem tra: "; cin >> n;
            }

            if (laPalindrome(n)) cout << n << " la so palindrome.\n";
            else cout << n << " khong phai la so palindrome.\n";
            break;
        }
        case 2: {
            cout << "\n=== IN SO FIBONACCI THU N ===\n";
            int n;
            cout << "Nhap mot so nguyen khong am bat ky: "; cin >> n;
            while (n < 0) {
                cout << "So nhap vao phai la so nguyen khong am!\n";
                cout << "Nhap mot so nguyen khong am bat ky: "; cin >> n;
            }

            cout << "So Fibonacci thu " << n << " la: " << fib(n);
            break;
        }
        case 3: {
            cout << "\n=== TIM PHAN TU LON NHAT TRONG MANG ===\n";
            int n;
            cout << "Nhap kich thuoc cua mang: "; cin >> n;
            while (n <= 0) {
                cout << "Kich thuoc cua mang phai la mot so nguyen duong!\n";
                cout << "Nhap kich thuoc cua mang: "; cin >> n;
            }

            vector<int> a(n);
            for (int i = 0; i < n; i++) {
                cout << "Nhap phan tu thu " << i + 1 << ": "; cin >> a[i];
            }
            cout << "Phan tu lon nhat trong mang la: " << timMax(a, n);
            break;
        }
        case 0: {
            cout << "\nDang thoat chuong trinh...";
            return;
        }
        default: {
            cout << "\nLoi!. Chi nhap cac so nguyen tu 0 -> 3!";
            break;
        }
    }
}

int main() {
    int choice;
    while (true) {
        cout << "\n\n=== MENU ===\n";
        cout << "1. Kiem tra so Palindrome\n";
        cout << "2. In so Fibonacci thu n\n";
        cout << "3. Tim phan tu lon nhat trong mang\n";
        cout << "0. Thoat chuong trinh\n";
        cout << "Nhap lua chon: "; cin >> choice;

        menu(choice);

        if (!choice) break;
    }
    return 0;
}