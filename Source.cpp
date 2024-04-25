#include <iostream>

int main() {
    int year;
    std::cout << "Enter year: ";
    std::cin >> year;

    bool is_leap_year = (year % 4 == 0 && year % 100 != 0);
    int total_days = 365 + static_cast<int>(is_leap_year);

    std::cout << "In " << year << " year = " << total_days << " days" << std::endl;

    return 0;
}
