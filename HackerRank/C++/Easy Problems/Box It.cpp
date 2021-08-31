#include<bits/stdc++.h>

using namespace std;

class Box {
private:
    int length, breadth, height;
public:
    Box() {
        length = breadth = height = 0;
    }

    Box(int l, int b, int h) {
        length = l;
        breadth = b;
        height = h;
    }

    Box(const Box &B) {
        length = B.length;
        breadth = B.breadth;
        height = B.height;
    }

    int getLength() const {
        return length;
    }

    int getBreadth() const {
        return breadth;
    }

    int getHeight() const {
        return height;
    }

    long long CalculateVolume() const {
        return (long long) length * breadth * height;
    }

    friend bool operator<(Box &A, Box &B) {
        if ((A.length < B.length) || ((A.breadth < B.breadth) && (A.length == B.length)) ||
            ((A.height < B.height) && (A.length == B.length) && (A.breadth == B.breadth))) {
            return true;
        } else {
            return false;
        }
    };

    friend ostream &operator<<(ostream &output, const Box &B) {
        output << B.length << ' ' << B.breadth << ' ' << B.height;
        return output;
    }
};

void check2() {
    int n;
    cin >> n;
    Box temp;
    for (int i = 0; i < n; i++) {
        int type;
        cin >> type;
        if (type == 1) {
            cout << temp << '\n';
        }
        if (type == 2) {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << '\n';
        }
        if (type == 3) {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp) {
                cout << "Lesser" << '\n';
            } else {
                cout << "Greater" << '\n';
            }
        }
        if (type == 4) {
            cout << temp.CalculateVolume() << '\n';
        }
        if (type == 5) {
            const Box &NewBox(temp);
            cout << NewBox << '\n';
        }

    }
}

int main() {
    check2();
}