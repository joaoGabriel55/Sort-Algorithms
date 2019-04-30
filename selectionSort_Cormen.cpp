#include <stdio.h>
#include <stdlib.h>

int main() {

	int arr[] = {12, 11, 13, 1, 6, 7};
	int n = 6;
	int aux = 0;
	for(int i = 0; i < n; i++) {
		int min = i;
		for(int j = i + 1; j < n; j++) {
			if(arr[j] < arr[min]) {
				min = j;
			}
		}
		printf("%d ", arr[min]);

		if(i != min) {
			aux = arr[i];
			arr[i] = arr[min];
			arr[min] = aux;
		}
	}
	printf("\n\n");
	for(int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}


	return 0;
}
