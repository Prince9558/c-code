#include <iostream>
#include <vector>

class Rectangle {
public:
    double length;
    double width;
    Rectangle(double len, double wid) : length(len), width(wid) {}
    double getPerimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    int n;
    std::cin >> n;
    std::vector<Rectangle> rectangles;

    for (int i = 0; i < n; i++) {
        double len, wid;
        std::cin >> len >> wid;
        Rectangle rect(len, wid);
        rectangles.push_back(rect);
    }

    double smallestPerimeter = rectangles[0].getPerimeter();
    int smallestRectangleIndex = 0;

    for (int i = 0; i < n; i++) {
        double perimeter = rectangles[i].getPerimeter();
        std::cout << "Perimeter of rectangle " << i + 1 << ": " << perimeter << std::endl;
        if (perimeter < smallestPerimeter) {
            smallestPerimeter = perimeter;
            smallestRectangleIndex = i;
        }
    }

    std::cout << "Perimeter of the smallest rectangle: " << smallestPerimeter << std::endl;

    return 0;
}

