#include <iostream>
#include <iomanip>

class StockItem {
private:
    int itemCode;
    int quantity;
    double pricePerUnit;

public:
    StockItem(int code, int qty, double price) : itemCode(code), quantity(qty), pricePerUnit(price) {}

    double getTotalPrice() {
        return quantity * pricePerUnit;
    }

    void displayTotalPrice() {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Total Price of the Stock: " << getTotalPrice() << std::endl;
    }
};

int main() {
    int itemCode, quantity;
    double pricePerUnit;

    std::cin >> itemCode >> quantity >> pricePerUnit;

    StockItem stock(itemCode, quantity, pricePerUnit);
    stock.displayTotalPrice();

    return 0;
}

