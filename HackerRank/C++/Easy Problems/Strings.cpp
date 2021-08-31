#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2, s3, sTemp;
    char a, b;
    cin >> s1 >> s2;
    int len1 = (int) s1.size(), len2 = (int) s2.size();
    cout << len1 << ' ' << len2 << '\n';
    sTemp = s3 = s1 + s2;
    cout << sTemp << '\n';
    a = s3[0];
    b = s3[len1];
    s3[0] = b;
    s3[len1] = a;
    for (int i = 0; i < len1; i++)
        cout << s3[i];
    cout << ' ';
    for (int i = len1; i < (int) s3.size(); i++)
        cout << s3[i];
    cout << '\n';
    return 0;
}
