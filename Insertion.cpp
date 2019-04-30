#include <stdio.h>
#include <stdlib.h>

int main() {

	int n = 6;
	int vetor[] = {6, 5, 4, 3, 2, 1};

	int i = 0;
	int key = 0;

	printf("Original: ");
	for(int index = 0; index < n; index++) {
		printf(" %d ", vetor[index]);
	}

	for(int j = 1; j < n; j++) {
		key = vetor[j]; // 4
		i = j - 1; //2 - 1 = 1
		while(i > 0 && vetor[i] > key) {//V - V
			vetor[i + 1] = vetor[i];
			i = i - 1; // 0
		}
		vetor[i + 1] = key;
	}

	printf("\nOrderned: ");
	for(int index = 1; index <= n; index++) {
		printf(" %d ", vetor[index]);
	}

	return 0;
}
