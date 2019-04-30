#include "Utils.h"
#include <stdio.h>

void printArray(int vetor[], int n){
	int count = 1;
	while(count <= n) {
		printf(" %d ", vetor[count]);
		count++;
		if(count >= n) {
			break;
		}
	}
}