#include <stdio.h>
#include <stdlib.h>

//Ponteiro sempre trabalha com endereco de memoria 
int main() {

	int value;
	
	int *pontValue;
	
	value = 10;
	
	pontValue = &value;
	
	printf("Pontier %d \n", *pontValue);
	
	printf("Valor %d \n", value);

	system("pause");
	return 0;
}
