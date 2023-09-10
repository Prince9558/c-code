#include <iostream>
#include <iomanip>

class Money {
private:
    int rupee;
    int paisa;

public:
    Money() : rupee(0), paisa(0) {}

    void setMoney(int r, int p) {
        rupee = r;
        paisa = p;
    }

    void addMoney(const Money& other) {
        rupee += other.rupee;
        paisa += other.paisa;
        if (paisa >= 100) {
            rupee += paisa / 100;
            paisa %= 100;
        }
    }

    void printMoney() {
        std::cout << std::fixed << std::setprecision(2) << rupee << "." << std::setw(2) << std::setfill('0') << paisa << std::endl;
    }
};

int main() {
    Money mother, father, total;

    int mother_rupee, mother_paisa, father_rupee, father_paisa;
    std::cin >> mother_rupee >> mother_paisa;
    std::cin >> father_rupee >> father_paisa;

    mother.setMoney(mother_rupee, mother_paisa);
    father.setMoney(father_rupee, father_paisa);

    total.addMoney(mother);
    total.addMoney(father);

    total.printMoney();

    return 0;
}

