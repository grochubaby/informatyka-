#include <iostream>
using namespace std;

int main() {
    int tablica[10];
    int suma_parzystych = 0;
    
    for (int i = 0; i < 10; i++) {
        cout << "Podaj liczbe nr " << i+1 << ": ";
        cin >> tablica[i];
    }
    
    cout << "Liczby parzyste: ";
    for (int i = 0; i < 10; i++) {
        if (tablica[i] % 2 == 0) {
            cout << tablica[i] << ", ";
            suma_parzystych += tablica[i];
        }
    }
    cout << endl;
    
    cout << "Suma liczb parzystych: " << suma_parzystych << endl;
    
    return 0;
}
