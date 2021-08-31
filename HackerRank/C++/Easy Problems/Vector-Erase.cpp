#include <bits/stdc++.h>

using namespace std;

int main() {
    int len, a, b, c;
    cin >> len;
    vector<int> v(len);
    for (int i = 0; i < len; ++i) {
        cin >> v[i];
    }
    cin >> a >> b >> c;
    v.erase(v.begin() + a - 1);
    v.erase(v.begin() + b - 1, v.begin() + c - 1);
    cout << (int) v.size() << '\n';
    for (int i: v) {
        cout << i << ' ';
    }
    cout << '\n';
    return 0;
}
