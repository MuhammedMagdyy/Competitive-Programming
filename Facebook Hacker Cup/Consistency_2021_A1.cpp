#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = 1e5 + 5, M = 1e9 + 7;
#define read(FILE)  freopen(FILE, "r", stdin)
#define write(FILE) freopen(FILE, "w", stdout)
#define all(v) (v).begin(), (v).end()

bool vowel(char str) {
    if (str == 'A' or str == 'E' or str == 'I' or str == 'O' or str == 'U')
        return true;
    return false;
}

void solve() {
    string str;
    cin >> str;
    int cntVowels = 0, cntConst = 0, ans = M, freqLetters[26];
    memset(freqLetters, 0, sizeof(freqLetters));
    bool ok = false;
    if ((int) str.size() == 1) {
        cout << "0" << '\n';
        return;
    }
    for (int i = 0; i + 1 < str.size(); ++i) {
        if (str[i] != str[i + 1]) {
            ok = true;
            break;
        }
    }
    if (!ok) {
        cout << "0" << '\n';
        return;
    }
    for (auto &i: str) {
        freqLetters[i - 'A']++;
        (vowel(i) ? cntVowels++ : cntConst++);
    }
    if (cntVowels == 0 and cntConst > 0) {
        cout << cntConst << '\n';
        return;
    } else if (cntVowels > 0 and cntConst == 0) {
        cout << cntVowels << '\n';
        return;
    }
    for (int i = 0; i < 26; ++i) {
        int res = 0;
        for (int j = 0; j < 26; ++j) {
            if (i != j) {
                if (vowel(char(i + 'A')) and vowel(char(j + 'A')) or !vowel(char(i + 'A')) and !vowel(char(j + 'A'))) {
                    res += (2 * freqLetters[j]);
                } else if (vowel(char(i + 'A')) and !vowel(char(j + 'A')) or !vowel(char(i + 'A')) and
                           vowel(char(j + 'A'))) {
                    res += freqLetters[j];
                }
            }
        }
        ans = min(ans, res);
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; ++i) {
        cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}