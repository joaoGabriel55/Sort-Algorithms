#include <stdio.h>
#include <stdlib.h>

int main() {

	int valorRest = 0;
	int sumValues = 0;
	int n = 1000;

	for (int i = 0; i <= n; i++) {
		if(i > 0) {
			for (int j = 1; j < i; j++) {
				valorRest = i % j;
				if(valorRest == 0) {
					//printf("%d mod %d = %d\n", i, j, valorRest);
					sumValues = sumValues + j;
				}
			}
			if(sumValues == i)
				printf("Perfect Numbers %d\n", sumValues);

		}

		//printf("SumValues %d\n", sumValues);
		//printf("%d\n", i);

		sumValues = 0;
	}

	system("pause");
	return 0;
}
