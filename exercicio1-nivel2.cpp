#include <iostream>

int main(){

float velMedia, tempoGasto, distanciaPerc, QtdeLitros;

	std::cout << "Digite o tempo que levou para efetuar a viagem: ";
	std::cin  >> tempoGasto;
	std::cout << "Digite a que velocidade estava: ";
	std::cin  >> velMedia;
	distanciaPerc = tempoGasto * velMedia;
	QtdeLitros = distanciaPerc / 12;
	std::cout << "\n";
	

	
	std::cout << "A velocidade media e de: " << velMedia;
	std::cout << "\n";
	std::cout << "A sua distancia percorrida foi de: " << distanciaPerc;
	std::cout << "\n";
	std::cout << "A quantidade de litros gastos foi de: " << QtdeLitros;

	
	
	
	

























}
