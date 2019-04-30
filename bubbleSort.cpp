#include <stdio.h>
#include <stdlib.h>

void bubble(int vetor[], int n) {
	int k = n;
	int aux;
	for(int i = 0; i < n; i++) {
		printf("oi\n");
		for(int j = 0; j < k; j++) {
			printf("io\n");
			if(vetor[j] > vetor[j + 1]) {
				aux = vetor[j];
				vetor[j] = vetor[j + 1];
				vetor[j + 1] = aux;
			}
		}
		k--;
	}
}

int main() {

	int vetor[10] = {1, 9, 8, 7, 0, 3, 4, 5, 6, 2};
	int n = 10;

	bubble(vetor, n);

	for(int i = 0; i < n; i++) {
		printf("%d  ", vetor[i]);
	}
	printf("\n");


	system("pause");
	return 0;
}
