#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int minNumber;
    cout << "Podaj 10 liczb calkowitych:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> numbers[i];
    }
    minNumber = numbers[0];
    for (int i = 1; i < 10; i++) {
        if (numbers[i] < minNumber) {
            minNumber = numbers[i];
        }
    }
    cout << "Najmniejsza liczba to: " << minNumber << endl;

    return 0;
}