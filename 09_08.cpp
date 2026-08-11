#include <bits/stdc++.h>
using namespace std;

bool isPerfectNum(int n) {
    if (!n) return false;
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) sum += i;
    }
    if (sum == n) return true;
    else return false;
}

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void selectionSort(vector<int> &arr) {
    int minInt;
    for (int i = 0; i < arr.size()-1; i++) {
        minInt = i;
        for (int j = i+1; j < arr.size(); j++) {
            if (arr[minInt] > arr[j]) minInt = j;
        }
        swap(arr[minInt], arr[i]);
    }
}

int main() {
    cout << "Kiem tra so hoan hao" << endl;
    int n;
    cout << "Nhap so nguyen can kiem tra: "; cin >> n;
    if (isPerfectNum(n)) cout << n << " la so hoan hao." << endl;
    else cout << n << " khong la so hoan hao." << endl;

    cout << " " << endl;
    cout << "Selection sort" << endl;
    int a;
    cout << "Nhap kich thuoc mang: "; cin >> a;
    vector<int> arr(a);
    for (int i = 0; i < a; i++) {
        cout << "Nhap so thu " << i + 1 << ": ";
        cin >> arr[i];
    }

    selectionSort(arr);
    cout << "Mang da duoc sap xep tang dan:" << endl;
    for (int i = 0; i < a; i++) cout << arr[i] << " ";
    return 0;
}