#include<iostream>

int maior(int numero1, int numero2, int numero3);

int main(){
	
	int numero1, numero2, numero3 = 0;	
	
	std::cout<< "Digite o primeiro numero: ";
	std::cin>>numero1;
	std::cout<< "Digite o sugundo numero: ";
	std::cin>>numero2;
	std::cout<< "Digite o terceiro numero: ";
	std::cin>>numero3;
	
	int result = maior(numero1, numero2, numero3);
	
	std::cout<< "O maior numero e: " << result;
	
	return 0;
}

int maior(int numero1, int numero2, int numero3){
	
	int maior = 0;
	
	if (numero1 > numero2 && numero1 > numero3){
		maior = numero1;
	} 
	else if (numero2 > numero1 && numero2 > numero3){
		maior = numero2;
	}
	else{
		maior = numero3;
	}

}
