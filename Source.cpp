#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    double length, width, height;
    std::cout << "���������� ��'��� �������������." << std::endl;
    std::cout << "������ ������ ���:" << std::endl;
    std::cout << "������� (��) -> ";
    std::cin >> length;
    std::cout << "������ (��) -> ";
    std::cin >> width;
    std::cout << "������ (��) -> ";
    std::cin >> height;

    double volume = length * width * height;

    std::cout << "��'��: " << volume << " ���.��." << std::endl;

    return 0;
}
