#include <bits/stdc++.h>

using namespace std;

void increment(const int *a, const int *b) {
    cout << *a + *b << '\n';
    cout << abs(*a - *b) << '\n';
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    increment(&a, &b);
    return 0;
}
