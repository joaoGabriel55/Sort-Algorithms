#include "InsertionSort.h"
#include <stdio.h>

void InsertionSort::order(int vetor[], int n) {
	int i = 0;
	int key = 0;
	//{1, 2, 3, 4, 5}
	//{5, 4, 3, 2, 1}
	for(int j = 1; j < n; j++) {
		key = vetor[j]; // 1
		i = j - 1; //4 - 1 = 3
		while(i > 0 && vetor[i] > key) {//V - V
			vetor[i + 1] = vetor[i]; // [3 + 1] = 2 
			i = i - 1; // 2
			printf(" %d ", i);
		}
		vetor[i + 1] = key; //[1 + 1] = 2
	}

}
