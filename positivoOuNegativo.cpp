#include<iostream>

int positivo(int numero);

int main(){
	
	int numero = 0;
	
	std::cout<< "Entre com um numero para saber se e negativo ou positivo: ";
	std::cin>>numero;
	
	int result =  positivo(numero);
	
	return 0;
}

int positivo(int numero){
	
	if(numero > 0){
	    std::cout<< "O valor e positivo!";
	}
	else{
		std::cout<< "O valor e negativo!";
	}
	
	return 0;
}
