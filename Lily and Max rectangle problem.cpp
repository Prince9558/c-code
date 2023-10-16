#include <iostream>
using namespace std;

class Rectangle {
    public:
    int width;
    int height;
    Rectangle(int w, int h) : width(w), height(h) {}
    bool operator==(const Rectangle& other) const {
    return (width == other.width) && (height == other.height);
    }
};

int main() {
    int w1, h1, w2, h2;
    cin >> w1 >> h1;
    cin >> w2 >> h2;
    Rectangle rectangle1(w1, h1);
    Rectangle rectangle2(w2, h2);
    if (rectangle1 == rectangle2) {
    cout << "Rectangle 1 and Rectangle 2 are equal in size." << endl;
    } else {
    cout << "Rectangle 1 and Rectangle 2 are not equal in size." << endl;
    }
    return 0;
}
