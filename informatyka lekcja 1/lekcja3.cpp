#include <iostream>
using namespace std;
int main (){
	int pierwszaliczba;
	cout << "podaj pierwsza liczba ";
	cin >> pierwszaliczba;
	
	int drugaliczba;
	cout << "podaj druga liczba ";
	cin >> drugaliczba;
	 
	char znakdzialania;
	cout << "podaj znak dzialania ( -, +, /, *): " ;
	cin >> znakdzialania;
	
	int wynik;
	switch(znakdzialania){
		case '-':
			wynik = pierwszaliczba - drugaliczba;
			cout << "wynik " << wynik <<endl;
			break;
		case '+':
			wynik = pierwszaliczba + drugaliczba;
			cout << "wynik " << wynik <<endl;
			break;	
		case '*':
			wynik = pierwszaliczba * drugaliczba;
			cout << "wynik " << wynik <<endl;
			break;
		case '/':
			wynik = pierwszaliczba / drugaliczba;
			cout << "wynik " << wynik <<endl;
			break;		
	}



	
}
