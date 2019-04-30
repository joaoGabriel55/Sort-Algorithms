#include <stdio.h>
#include <stdlib.h>

void selection(int vetor[], int n) {
	int aux;
	int menor; //Posicao do menor valor do vetor.
	for(int i = 0; i < n - 1; i++) {
		menor = i;
		for(int j = i + 1; j < n; j++) {
			if(vetor[menor] > vetor[j]) {
				menor = j;
			}
		}
		if(i != menor) {
			aux = vetor[i];
			vetor[i] = vetor[menor];
			vetor[menor] = aux;
		}
	}
}

int main() {
	int n = 10;
	int vetor[] = {1, 9, 8, 7, 0, 3, 4, 5, 6, 2};

	selection(vetor, n);

	for(int i = 0; i < n; i++) {
		printf("%d ", vetor[i]);
	}

	system("pause");
	return 0;
} 
