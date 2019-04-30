#include <stdlib.h>
#include <stdio.h>
#include "util/Utils.h"
#include "ordenacoes/InsertionSort.h"
#include "ordenacoes/BubbleSort.h"

int main() {
	int vetor[] = {6, 5, 4, 3, 2, 1};
	int n = 6;

	// InsertionSort insert;
	// insert.order(vetor, n);
	
	BubbleSort bubble;
	bubble.order(vetor, n);

	printf("\nOrderned: ");
	printArray(vetor, n + 1);

	return 0;
}
