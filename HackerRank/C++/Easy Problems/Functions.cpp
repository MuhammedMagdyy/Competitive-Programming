#include <bits/stdc++.h>

using namespace std;

int get_max(int a, int b, int c, int d) {
    return a * (a >= b) * (a >= c) * (a >= d) +
           b * (b > a) * (b >= c) * (b >= d) +
           c * (c > a) * (c > b) * (c >= d) +
           d * (d > a) * (d > b) * (d > c);
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << get_max(a, b, c, d);
    return 0;
}
