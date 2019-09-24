# -*- coding: utf-8 -*-

def ehPrimo(number):
	nDiv = 0
	for i in range(1, number+1):
		if number % i == 0:
			nDiv=nDiv+1
	return nDiv


def main():
    r = [10, 100, 1000, 10000]
    for max in r:
        contPrimo = 0
        for number in range(2,max):
            nDiv = ehPrimo(number)
            if nDiv == 2:
                contPrimo = contPrimo + 1
        print("Numeros de Primos ate %d: %2.2f %%\n", max, (100.0*contPrimo)/max)
        
main()
