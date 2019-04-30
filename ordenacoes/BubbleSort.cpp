#include "BubbleSort.h"
#include <stdio.h>

void BubbleSort::order(int vetor[], int n) {
	int aux = 0; //To realize swaps
	for(int i = n; i >= 0  ; i--) { //n -1
		for(int j = 0; j <= i; j++) {
			if(vetor[j] > vetor[j + 1]) {
				aux = vetor[j];
				vetor[j] = vetor[j + 1];
				vetor[j + 1] = aux;
			}
		}
	}
}
