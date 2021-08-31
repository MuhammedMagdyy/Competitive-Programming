#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n, q;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        auto it = lower_bound(v.begin(), v.end(), x);
        if (v[it - v.begin()] == x) {
            cout << "Yes " << (it - v.begin() + 1) << '\n';
        } else {
            cout << "No " << (it - v.begin() + 1) << '\n';
        }
    }
    return 0;
}
