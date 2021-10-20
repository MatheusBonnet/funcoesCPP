#include<iostream>

float mediaComTodasAsNotas(float a, float b, float c);
float duasNotas(float a, float b, float c);
int main(){
	
	float nota1 = 0;
	float nota2 = 0;
	float nota3 = 0;
	
	std::cout << "Digite a primeira nota: ";
	std::cin >> nota1; 
	std::cout << "Digite a segunda nota: ";
	std::cin >> nota2;
	std::cout << "Digite a terceira nota: ";
	std::cin >> nota3;
	
	float result1 = mediaComTodasAsNotas(nota1, nota2, nota3);
	float result2 = duasNotas(nota1, nota2, nota3);
	
	std::cout << result1 << "\n";
	
	std::cout << result2 << "\n";
	
	
}

float mediaComTodasAsNotas(float a, float b, float c){
	float todasMedias = (a + b + c) / 3;
	return todasMedias;
}

float duasNotas(float a, float b, float c){
	float maior = 0;
	float menor = 0;
	float medio = 0;
	 
	if(a > b && a > c){
	 	maior = a;
	 	if(b > c){
 		medio = b;
 		menor = c;
		}
	}else if(b > a && b > c){
		maior = b;
		if(c > a){
		medio = c;
		menor = a;
		}
	}
	else {
		maior = c;
	 	if(a > b){
	 		medio = a;
			menor = b;	
		}
	}
	
	float result = (maior + medio) / 2;
	return result;	 
}
	
