#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

        double scale_km, distance_cm;
        std::cout << "���������� ������ �� ���������� ��������." << std::endl;
        std::cout << "������ ������ ���:" << std::endl;
        std::cout << "������� ����� (������� �������� � ������ ���������) -> ";
        std::cin >> scale_km;
        std::cout << "³������ �� �������, �� ���������� ������� ������ (��) -> ";
        std::cin >> distance_cm;

        double distance_km = scale_km * distance_cm / 1;

        std::cout << "³������ �� ���������� �������� " << distance_km << " ��." << std::endl;

        return 0;
    }

