#include <bits/stdc++.h>

using namespace std;

template<class T>
class AddElements {
private:
    T element;
public:
    explicit AddElements(T value) {
        element = value;
    }

    T add(T num) {
        return element + num;
    }
};

template<>
class AddElements<string> {
private:
    string element;
public:
    explicit AddElements(string value) {
        element = move(value);
    }

    string concatenate(const string &str) {
        return element + str;
    }
};

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n, i;
    cin >> n;
    for (i = 0; i < n; i++) {
        string type;
        cin >> type;
        if (type == "float") {
            double element1, element2;
            cin >> element1 >> element2;
            AddElements<double> myFloat(element1);
            cout << myFloat.add(element2) << endl;
        } else if (type == "int") {
            int element1, element2;
            cin >> element1 >> element2;
            AddElements<int> myInt(element1);
            cout << myInt.add(element2) << endl;
        } else if (type == "string") {
            string element1, element2;
            cin >> element1 >> element2;
            AddElements<string> myString(element1);
            cout << myString.concatenate(element2) << '\n';
        }
    }
    return 0;
}