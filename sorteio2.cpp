#include<iostream>
#include<cstdlib>
#include<ctime>

#define LIMITE 6

int dado();
int main(){
	
	int lados[] = {0,0,0,0,0,0};



	for(int i = 0; i < 100000; i++){
	int sorteio = dado();
	lados[sorteio - 1]++;
	std::cout << sorteio;
	}

	std::cout << "\n --------------- \n";
	for(int i = 0; i < 6; i++){
	std::cout << "\n Lado " << i + 1 << ": " << lados[i];
	}
	return 0;
}

int dado(){
	
    srand(time(NULL));
    int sorteio = rand() % LIMITE;
    while(sorteio == 0 ){
    	int sorteio = rand() % LIMITE;
    }
    return sorteio;

}
