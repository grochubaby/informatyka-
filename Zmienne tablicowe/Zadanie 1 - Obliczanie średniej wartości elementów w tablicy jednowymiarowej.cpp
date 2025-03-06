#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    int sum = 0; 
    for (int i = 0; i < 5; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> numbers[i];
    }
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    double average = sum / 5.0;
    cout << "Srednia liczb: " << average << endl;

    return 0;
}