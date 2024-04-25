#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

        double scale_km, distance_cm;
        std::cout << "Обчислення відстані між населеними пунктами." << std::endl;
        std::cout << "Введіть вихідні дані:" << std::endl;
        std::cout << "Масштаб карти (кількість кілометрів в одному сантиметрі) -> ";
        std::cin >> scale_km;
        std::cout << "Відстань між точками, що зображують населені пункти (см) -> ";
        std::cin >> distance_cm;

        double distance_km = scale_km * distance_cm / 1;

        std::cout << "Відстань між населеними пунктами " << distance_km << " км." << std::endl;

        return 0;
    }

