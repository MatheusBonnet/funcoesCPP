#include<iostream>

float delta(float a, float b, float c);

int main(){
	
	float a, b, c = 0;
	
	
	std::cout<< "Digite o numero a: ";
	std::cin>>a;
	std::cout<< "Digite o numero a: ";
	std::cin>>b;
	std::cout<< "Digite o numero a: ";
	std::cin>>c;
	
	float result = delta(a, b, c);
	std::cout<< result;
	
	
	return 0;
}

float delta(float a, float b, float c){
	
	float delta = (b * b ) - 4 * a  * c;
	return delta; 
}
