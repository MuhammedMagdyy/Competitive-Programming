#include <bits/stdc++.h>

using namespace std;

class Triangle {
public:
    static void triangle() {
        cout << "I am a triangle" << '\n';
    }
};

class Isosceles : public Triangle {
public:
    static void isosceles() {
        cout << "I am an isosceles triangle" << '\n';
    }

    static void description() {
        cout << "In an isosceles triangle two sides are equal" << endl;
    }
};

int main() {
    Isosceles::isosceles();
    Isosceles::description();
    Isosceles::triangle();
    return 0;
}
