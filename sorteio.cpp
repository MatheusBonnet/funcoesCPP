#include<iostream>
#include<cstdlib>
#include<ctime>

#define LIMITE 6

int dado();
int main(){
	
	int numero = 0;
	
	std::cout << "Digite um numero para eu adivinhar: ";
	std::cin >> numero;
	
	int result = dado();
	std::cout << result;
	
	
}

int dado(){
	
    srand(time(NULL));
    int sorteio = rand() % LIMITE;
    return sorteio;
}
