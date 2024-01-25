/*
    In the name of Allah
    MeGzz *_*
    Next Step? ACPC Insha'Allah
    <I CAN DO IT/>
*/
#include <bits/stdc++.h>
using namespace std;
#define read(FILE)  freopen(FILE, "r", stdin);
#define write(FILE) freopen(FILE, "w", stdout);
#define PY puts("YES")
#define PN puts("NO")
#define P puts("")
#define sf scanf
#define pf printf
#define pb push_back
#define endl '\n'
typedef long long ll;
const int MOD = 1e9 + 7;
const int MAX = 1005;
int arr[MAX];

int main() {
    int n, totSum = INT_MAX;
    sf("%d", &n);
    n *= 2;
    for(int i = 0; i < n; ++i) {
        sf("%d", &arr[i]);
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            vector<int> v;
            for(int k = 0; k < n; ++k) {
                if (i != k && j != k) {
                    v.pb(arr[k]);
                }
            }
            sort(v.begin(), v.end());
            int partSum = 0;
            for(int q = 1; q < v.size(); q = q + 2) {
                partSum += (v[q] - v[q - 1]);
            }
            totSum = min(totSum, partSum);
        }
    }
    pf("%d\n", totSum);
    return 0;
}
