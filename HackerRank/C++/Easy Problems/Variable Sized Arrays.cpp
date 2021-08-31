#include <bits/stdc++.h>

using namespace std;
const int MAX = 1e5 + 5;
vector<int> vvi[MAX];

int main() {
    int n, q;
    cin >> n >> q;
    for (int i = 0; i < n; ++i) {
        int len;
        cin >> len;
        vvi[i].resize(len);
        for (int j = 0; j < len; ++j) {
            cin >> vvi[i][j];
        }
    }
    for (int i = 0; i < q; ++i) {
        int pos1, pos2;
        cin >> pos1 >> pos2;
        cout << vvi[pos1][pos2] << '\n';
    }
    return 0;
}
