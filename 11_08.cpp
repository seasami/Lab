#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int giaiThua(int n) {
    if (n <= 0) return -1;
    ll ans = 1;
    for (int i = 1; i <= n; i++) ans *= i;
    return ans;
}

bool isEven(int n) {
    if (n % 2) return false;
    else return true;
}

void insertionSort(vector<int> &arr) {
    int curr;
    for (int i = 1; i < arr.size(); i++) {
        curr = arr[i];
        int j = i - 1;
        while (j >= 0 && curr < arr[j]) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curr;
    }
}

int main() {
    cout << "1. Tinh giai thua cua n va kiem tra chan le." << endl;
    int n;
    cout << "Nhap n: "; cin >> n;
    ll ans = giaiThua(n);
    if (ans == -1) cout << "n phai la so nguyen duong." << endl;
    else {
        cout << "Giai thua cua n: " << ans << endl;
        if (isEven(giaiThua(n))) cout << "n co giai thua la mot so chan." << endl;
        else cout << "n co giai thua la mot so le." << endl;
    }

    cout << "2. Insertion Sort" << endl;
    int m;
    cout << "Nhap kich thuoc mang: "; cin >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++) {
        cout << "Nhap phan tu thu " << i + 1 << ": "; cin >> a[i];
    }

    insertionSort(a);
    cout << "Mang duoc sap xep tang dan: ";
    for (int i = 0; i < m; i++) {
        cout << a[i] << " ";
    }
    return 0;
}