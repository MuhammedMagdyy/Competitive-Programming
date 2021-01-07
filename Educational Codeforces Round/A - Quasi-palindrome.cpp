/*
    In the name of Allah
    MeGzz *_*
    Next Step? ACPC Insha'Allah
    <I CAN DO IT/>
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define read(FILE)  freopen(FILE, "r", stdin);
#define write(FILE) freopen(FILE, "w", stdout);
#define PY puts("YES")
#define PN puts("NO")
#define P puts("")
#define sf scanf
#define pf printf
#define pb push_back
#define endl '\n'
const int MOD = 1e9 + 7;

int main() {
    int x;
    sf("%d", &x);
    while(x % 10 == 0) {
        x /= 10;
    }
    string s = to_string(x);
    reverse(s.begin(), s.end());
    if (to_string(x) == s) {
        PY;
    }
    else {
        PN;
    }
    return 0;
}
