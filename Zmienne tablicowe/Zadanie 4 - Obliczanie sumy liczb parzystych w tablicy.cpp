#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int sumEven = 0;
    cout << "Podaj 10 liczb calkowitych:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> numbers[i];
    }
    cout << "Liczby parzyste: ";
    for (int i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            cout << numbers[i];
            sumEven += numbers[i];
            if (i < 9) {
                cout << ", ";
            }
        }
    }
    cout << endl << "Suma liczb parzystych: " << sumEven << endl;

    return 0;
}
