#include<iostream>
#include<cstdlib>
#include<ctime>

#define LIMITE 6

int dado();
int main(){
	
	for(int i = 0; i < 10000000; i++){
		std::cout << dado();
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
