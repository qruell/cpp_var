#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int inputSeconds;
    cout << "Введіть кількість секунд: ";
    cin >> inputSeconds;

    int hours = inputSeconds / 3600;
    int minutes = (inputSeconds % 3600) / 60;
    int seconds = inputSeconds % 60;

    cout << "Годин: " << hours << ", Хвилин: " << minutes << ", Секунд: " << seconds << endl;

    return 0;
}
