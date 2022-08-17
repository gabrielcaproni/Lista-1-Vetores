#include<stdio.h>
#include "Vetlib.h"

int main(){
	int vet[100], n, res, busca;
	printf("Quantidade de elementos no vetor:");
	scanf("%d", &n);
	geravet(vet,n);
	printf("Vetor gerado;");
	printvet(vet, n);
	printf("Valor para busca:");
	scanf("%d", &busca);
	res = existe(busca,vet,n);
	printf("%d encontrado %d vez(es)\n", busca, res);
	return 0;
}
