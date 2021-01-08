#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin >> T;
    set<int> s;
    while(T--) {
        int query, num;
        cin >> query >> num;
        if (query == 1) {
            s.insert(num);
        }
        else if (query == 2) {
            s.erase(num);
        }
        else if (query == 3){
            if (s.find(num) != s.end()) {
                puts("Yes");
            }
            else {
                puts("No");
            }
        }
        
    }   
    return 0;
}