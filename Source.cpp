#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int hryvnia, kopyjka;
    std::cout << "Введіть гривні та копійки через пробіл: ";
    std::cin >> hryvnia >> kopyjka;

    if (kopyjka >= 100) {
        hryvnia += kopyjka / 100;
        kopyjka %= 100;
    }

    std::cout << "Правильна сума: " << hryvnia << " грн. " << kopyjka << " коп." << std::endl;

    return 0;
}
