#include <iostream>
using namespace std;
int main(){

float celsius, Fahrenheit, kelvin, calcFahrenheit;

	cout << "Digite graus em Fahrenheit para podermos fazer a conversao: ";
	cin  >> Fahrenheit;




 	celsius = ((Fahrenheit - 32) * 5) / 9;
	cout << "\n";



	cout << "Fahrenheit convertido em Celsius: " << celsius;

	kelvin = celsius + 273.15;
	cout << "\n";
	cout << "Celsius convertido em Kelvin: " << kelvin;
	

	

}
