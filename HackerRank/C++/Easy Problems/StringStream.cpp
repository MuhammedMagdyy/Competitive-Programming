#include <bits/stdc++.h>

using namespace std;

vector<int> parseInts(const string &str) {
    stringstream s(str);
    vector<int> v;
    int var;
    char ch;
    while (s >> var) {
        v.push_back(var);
        s >> ch;
    }
    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (auto &integer: integers) {
        cout << integer << "\n";
    }

    return 0;
}
