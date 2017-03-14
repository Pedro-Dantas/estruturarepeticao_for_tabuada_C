#include <stdio.h>
#include <stdlib.h>

//Estudo de estrutura repetição em C, tabuada de 10.

int main(int argc, char *argv[]) {
	
	int cont;
	int num;
	
	printf("\n Digite um numero para a tabuada: ");
	scanf("%d", &num);
	
	for(cont = 1 ; cont < 11; cont = cont +1){
		
		printf(" %d x %d = %d\n", num, cont, num*cont);
		
	}
	
	return 0;	
}

