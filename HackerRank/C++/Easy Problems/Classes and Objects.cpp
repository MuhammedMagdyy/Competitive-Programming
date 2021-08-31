#include <bits/stdc++.h>

using namespace std;

class Student {
private:
    int scores[5]{}, sum;
public:
    Student() {
        sum = 0;
    }

    void input() {
        for (int &score: scores) {
            cin >> score;
            sum += score;
        }
    }

    int calculateTotalScore() const {
        return sum;
    }

};

int main() {
    int n;
    cin >> n;
    auto *s = new Student[n];

    for (int i = 0; i < n; i++) {
        s[i].input();
    }

    int kristen_score = s[0].calculateTotalScore();
    int count = 0;
    for (int i = 1; i < n; i++) {
        int total = s[i].calculateTotalScore();
        if (total > kristen_score) {
            count++;
        }
    }
    cout << count << '\n';
    return 0;
}
