#include <stdio.h>

int ehPrimo(int number){
	int nDiv = 0;
	for (int i = 1; i <= number; i++){
		if (number % i == 0){
			nDiv++;
		}
	}
	return nDiv;	
}

int main(){
	for (int max = 10; max <= 100000; max = max * 10){	
		int contPrimo = 0;
		for (int number = 2; number < max; number++){
			int nDiv = ehPrimo(number);
			if (nDiv == 2){
				contPrimo++;			
			}
		}
		printf("Numeros de Primos ate %d: %2.2f %% \n", max, (100.0*contPrimo)/max);
	}
}
