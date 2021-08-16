#include<iostream>

int main () {
	
	int numero;
	
	std::cout << "Digite um numero e saberemos se e PAR ou IMPAR: ";
	std::cin  >> numero;
	
	
	if(numero >=1){
	std::cout << "Positivo";
		
		
	}
	else if(numero < 0){
	std::cout << "negativo";
		
	}
	else{
		
		std::cout << "nulo";
		
	}
	
}