#include <stdio.h>
#include <stdlib.h>

int dividir(int vetor[], int esq, int dir) {
	int aux;//Troca de posiçoes.
	int count = esq;
	for(int i = esq + 1; i <= dir; i++) {
		if(vetor[i] < vetor[esq]) {
			count++;
			aux = vetor[i];
			vetor[i] = vetor[count];
			vetor[count] = aux;
		}
	}
	//pega o ultimo valor de count.
	aux = vetor[esq];
	vetor[esq] = vetor[count];
	vetor[count] = aux;

	return count;
}

void quick(int vetor[], int esq, int dir) {
	int pos;
	if(esq < dir) {
		pos = dividir(vetor, esq, dir);
		printf("Pos: %d\n", pos);
		quick(vetor, esq, pos - 1);
		quick(vetor, pos + 1, dir);
	}
}


int main() {

	int vetor[10] = {3, 5, 7, 9, 1, 6, 2, 71, 41, 14};
	int n = 10;

	quick(vetor, 0, n);
	printf("\n\n");
	int count = 0;
	while(count < n) {
		printf(" %d ", vetor[count]);
		count++;
		if(count > 10) {
			break;
		}
	}
	printf("\n\n");
	system("pause");
	return 0;
}
