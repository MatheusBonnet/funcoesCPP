#include<iostream>

int menor(int numero1, int numero2, int numero3);

int main(){
	
	int numero1, numero2, numero3 = 0;	
	
	std::cout<< "Digite o primeiro numero: ";
	std::cin>>numero1;
	std::cout<< "Digite o sugundo numero: ";
	std::cin>>numero2;
	std::cout<< "Digite o terceiro numero: ";
	std::cin>>numero3;
	
	int result = menor(numero1, numero2, numero3);
	
	std::cout<< "O menor numero e: " << result;
	
	return 0;
}

int menor(int numero1, int numero2, int numero3){
	
	int menor = 0;
	
	if (numero1 < numero2 && numero1 < numero3){
		menor = numero1;
	} 
	else if (numero2 < numero1 && numero2 < numero3){
		menor = numero2;
	}
	else{
		menor = numero3;
	}

}
