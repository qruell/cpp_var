#include <iostream>
#include <cmath>
#include <Windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    double radius;
    const double pi = 3.14159;

    std::cout << "ќбчисленн€ об'Їму кул≥." << std::endl;
    std::cout << "¬вед≥ть рад≥ус кул≥: ";
    std::cin >> radius;

    double volume = (4.0 / 3.0) * pi * pow(radius, 3);

    std::cout << "ќб'Їм кул≥ з рад≥усом " << radius << " одиниць: " << volume << std::endl;

    return 0;
}
