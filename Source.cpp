#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int days, weeks, remainingDays;

    cout << "������ ������� ���: ";
    cin >> days;

    weeks = days / 7;
    remainingDays = days % 7;

    cout << weeks << " ���� � " << remainingDays << " ��" << endl;

    return 0;
}
