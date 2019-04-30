#include <stdlib.h>
#include "getBigger.h"

int getBigger(int *vetor) {
	int pos = 0;
	int maior = 0;
	int num = 0;
	for(int i = 0; i < 5; i++) {
		if(vetor[i] > vetor[maior]) {
			maior = i;
			num = vetor[maior];
		}
	}
	
	return num;
}
