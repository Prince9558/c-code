#include <iostream>
#include <iomanip>

class Temperature {
private:
    double celsius;
    double fahrenheit;

public:
    Temperature(double c) : celsius(c) {
        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    }

    void displayTemperature() {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << celsius << " degree celsius" << std::endl;
        std::cout << fahrenheit << " degree fahrenheit" << std::endl;
    }
};

int main() {
    double celsius;
    std::cin >> celsius;

    Temperature temp(celsius);
    temp.displayTemperature();

    return 0;
}

