#include <bits/stdc++.h>
using namespace std;

int fib(int n) {
    if (n <= 0) return;
    if (n == 1) return 0;

    int num = n;
    while (num < n) {
        return fib(num - 1) + fib(num - 2);
    }
}

bool isPalindrome(int n) {
    if (n < 0) return false;
    if (n == 0) return true;

    string s = to_string(n);
    for (int i = 0; i <= (s.length() / 2) - 1; i++) {
        if (s[i] != s[s.length() - i - 1]) return false;
    }
    return true;
}

int binarySearch(vector<int> &arr, int val) {
    if (!arr.size()) return -1;

    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int middle = (left + right) / 2;
        if (arr[middle] == val) return middle;
        if (arr[middle] < val) left = middle + 1;
        else {
            right = middle - 1;
        }
    }
    return -1;
}

void menu(int n) {
    cout << "1. Fibonacci";
    cout << "2. So doi xung";
    cout << "3. Tim kiem nhi phan";

    switch(n) {
        case 1:
            int a;
            cout << "Nhap mot so nguyen duong khac 0: ";
            fib(a);
        break;

        case 2:
            int b;
            cout << "Nhap so can kiem tra tinh doi xung: "; cin >> b;
            if (isPalindrome(b)) cout << "So " << b << " la so doi xung.";
            else cout << "So " << b << " khong doi xung.";
        break;

        case 3:
            int c;
            cout << "Nhap kich thuoc mang: "; cin >> c;
            vector<int> a(c);
            for (int i = 0; i < c; i++) {
                cout << "Nhap so hang thu " << i + 1 << ": "; cin >> a[i];
            }
            int val;
            cout << "Nhap so muon tim trong mang: "; cin >> val;
            int result = binarySearch(a, val);
            if (result == -1) cout << "Khong tim thay so " << val << " trong mang.";
            else {
                cout << "So can tim nam o vi tri thu " << result + 1 << " trong mang.";
            }
        break;
        
        default: break;
    }
}

int main() {
    int n;
    menu(n);
    return 0;
}