#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int p, int q, int r) {
	int i, j, k;
	int n1 = q - p + 1;
	int n2 =  r - q;

	/* create temp arrays */
	int L[n1], R[n2];

	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < n1; i++)
		L[i] = arr[p + i - 1];
	for (j = 0; j < n2; j++)
		R[j] = arr[q + j];

	/* Merge the temp arrays back into arr[l..r]*/
	i = 0; // Initial index of first subarray
	j = 0; // Initial index of second subarray

	for(k = p; k < r; k++) {
		if(L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		} else {
			arr[k] = R[j];
			j++;
		}
	}
}

void mergeSort(int arr[], int p, int r) {
	int q = 0;
	if(p < r) {
		q = (p + r) / 2;
		printf("q: %d | p: %d | r: %d\n ", q, p, r);
		mergeSort(arr, p, q);
		mergeSort(arr, q + 1, r);
		merge(arr, p, q, r);
	}
}

void printArray(int A[], int size) {
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", A[i]);
	printf("\n");
}

/* Driver program to test above functions */
int main() {
	int arr[] = {12, 11, 13, 5, 6, 7};
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	printf("Length: %d\n", arr_size);
	printf("Given array is \n");
	printArray(arr, arr_size);

	mergeSort(arr, 0, arr_size);

	printf("\nSorted array is \n");
	printArray(arr, arr_size);
	return 0;
}
