#include<stdio.h>
#include<stdlib.h>
void geravet(int v[], int n){
  	int i;
  	srand(time(NULL)); //inicializa geravet
  	for(i=0;i<n;i++){
		v[i]=rand()%20;
  	}
  }
  //----------------------------------------
  void leiavetor(int v[], int n){
  	int i;
  	for(i=0;i<n;i++){
  		scanf("%d", &v[i]);
	  }
  }
  //----------------------------------------
void printvet(int v[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d |", v[i]);
		printf("\n");
	}
}
//------------------------------------------
 int somavet(int v[], int n){
	int i, soma=0;
	for(i=0;i<n;i++)
		soma+=v[i];
	return soma ;
}
//------------------------------------------
int maiorvet(int v[], int n){
	int i, maior = v[0];
	for(i=1;i<n;i++){
		if(v[i]>maior)
		maior = v[i];
	}
return maior;
	
}
//------------------------------------------
int menorvet(int v[], int n){

	int i, menor = v[0];
	for(i=1;i<n;i++){
		if(v[i]<menor)
			menor = v[i];
	}
return menor;
}	
//------------------------------------------
int existe(int x, int v[], int n){
	int cont=0, i;
	for(i=0;i<n;i++){
		if(v[i]==x)
			cont++;
}
		return 0;
}	
//------------------------------------------
int qtdimpar(int v[], int n){
	int qtd=0, i;
	for(i=0;i<n;i++){
		if(v[i]%2==1){
			qtd++;
		}
	}
	return qtd;
}
