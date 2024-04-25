#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    double distance, time_minutes;
    cout << "Обчислення швидкості бігу." << endl;
    cout << "Введіть довжину дистанції (метрів) = ";
    cin >> distance;
    cout << "Введіть час (хв.сек) = ";
    cin >> time_minutes;

    double time_seconds = time_minutes * 60;
    double speed_kph = (distance / 1000) / (time_seconds / 3600);

    cout << "Дистанція: " << distance << " м." << endl;
    cout << "Час: " << int(time_minutes) << " хв " << int((time_minutes - int(time_minutes)) * 60) << " сек = " << int(time_seconds) << " сек." << endl;
    cout << "Ви бігли зі швидкістю " << speed_kph << " км/год." << endl;

    return 0;
}
