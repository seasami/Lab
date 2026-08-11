#include <bits/stdc++.h>
using namespace std;

bool isEven(int n) {
    int giaiThua = 1;
    for (int i = 1; i <= n; i++) giaiThua *= i;
    if (giaiThua % 2) return false;
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
    if (isEven(n)) cout << "Giai thua cua n la so chan." << endl;
    else cout << "Giai thua cua n la so le." << endl;
    cout << " " << endl;

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