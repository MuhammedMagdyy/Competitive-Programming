#include <bits/stdc++.h>
using namespace std;

const int MAX = 1005;
int arr[MAX];

int main() {
    int n, totSum = INT_MAX;
    cin >> n;
    n *= 2;
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            vector<int> v;
            for(int k = 0; k < n; ++k) {
                if (i != k && j != k) {
                    v.push_back(arr[k]);
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
    cout << totSum << '\n';
    return 0;
}
