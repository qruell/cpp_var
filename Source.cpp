#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int hryvnia, kopyjka;
    std::cout << "������ ����� �� ������ ����� �����: ";
    std::cin >> hryvnia >> kopyjka;

    if (kopyjka >= 100) {
        hryvnia += kopyjka / 100;
        kopyjka %= 100;
    }

    std::cout << "��������� ����: " << hryvnia << " ���. " << kopyjka << " ���." << std::endl;

    return 0;
}
