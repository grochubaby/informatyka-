#include <iostream>

int main() {
    int a, b;

    std::cout << "Podaj pierwszą liczbę: ";
    std::cin >> a;
    std::cout << "Podaj drugą liczbę: ";
    std::cin >> b;

    int suma = a + b;

    std::cout << "Suma: " << suma << std::endl;

    if (suma % 2 == 0)
        std::cout << "Suma jest liczbą parzystą." << std::endl;
    else
        std::cout << "Suma jest liczbą nieparzystą." << std::endl;

    return 0;
}