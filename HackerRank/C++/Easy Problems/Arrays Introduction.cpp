#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, temp;
    cin >> x;
    int arr[x];
    for (int i = 0; i < x; i++)
        cin >> arr[i];
    for (int i = 0,  j = x - 1; i < x / 2; i++, j--) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (int i = 0; i < x; i++)
        cout << arr[i] << ' ';
    return 0;
}
