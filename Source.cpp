#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    double distance, time_minutes;
    cout << "���������� �������� ���." << endl;
    cout << "������ ������� ��������� (�����) = ";
    cin >> distance;
    cout << "������ ��� (��.���) = ";
    cin >> time_minutes;

    double time_seconds = time_minutes * 60;
    double speed_kph = (distance / 1000) / (time_seconds / 3600);

    cout << "���������: " << distance << " �." << endl;
    cout << "���: " << int(time_minutes) << " �� " << int((time_minutes - int(time_minutes)) * 60) << " ��� = " << int(time_seconds) << " ���." << endl;
    cout << "�� ���� � �������� " << speed_kph << " ��/���." << endl;

    return 0;
}
