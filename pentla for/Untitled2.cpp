#include <iostream>
using namespace std;
int main(){
float waga;
float wzrost ;
cout << "podaj wzrost: " <<endl;
cin >> wzrost;
cout << "podaj wage: " <<endl;
cin >> waga;
int BMI;
BMI = waga / (wzrost*wzrost);
if (BMI<=18.5){
	cout << "niedowaga" << endl;
}

		
	else if ((BMI>=18.5) && (BMI<=29.9)){
	cout << "w normie " << endl;}
}















}