#include <iostream>

int main(){

float celsius, Fahrenheit;

	std::cout << "Digite graus em Fahrenheit: ";
	std::cin  >> Fahrenheit;




 	celsius = ((Fahrenheit - 32) * 5) / 9;

	
	std::cout << "Fahrenheit convertido em Celsius: " << celsius;
	

	

}
