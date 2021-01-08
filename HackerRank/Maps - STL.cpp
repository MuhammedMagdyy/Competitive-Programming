#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin >> T;
    map<string, int> mp;
    while(T--) {
        int query;
        string stdName;
        cin >> query >> stdName;
        if (query == 1) {
            int stdMark;
            cin >> stdMark;
            mp[stdName] += stdMark;
        }
        else if (query == 2) {
            mp.erase(stdName);
        }
        else if (query == 3) {
            cout << mp[stdName] << endl;
        }
    }   
    return 0;
}