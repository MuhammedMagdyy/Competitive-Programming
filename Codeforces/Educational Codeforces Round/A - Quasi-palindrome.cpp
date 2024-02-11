#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    while(x % 10 == 0) {
        x /= 10;
    }
    string s = to_string(x);
    reverse(s.begin(), s.end());
    if (to_string(x) == s) {
        cout << "YES" << '\n';
    }
    else {
        cout << "NO" << '\n';
    }
    return 0;
}
