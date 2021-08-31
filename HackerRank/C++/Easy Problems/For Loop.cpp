#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    string arr[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for (int i = x; i <= y; ++i) {
        if (i <= 9)
            cout << arr[i - 1] << '\n';
        else {
            if (i % 2 == 0)
                cout << "even" << '\n';
            else
                cout << "odd" << '\n';
        }
    }
    return 0;
}
