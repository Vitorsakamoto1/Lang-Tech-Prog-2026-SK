#include <stdio.h>
#include <stdlib.h>

/* 
	Faça um programa que leia 10 números do tipo inteiros positivos,
	calcule a soma e a média e mostre na tela.
	OBS: somente com 3 variveis (i, n, s). Não pode ser vetor.
	Não pode usar o laço FOR. 
*/

int main(int argc, char *argv[]) {
	int i, n, s;
	s=0;
	
	while (i<10){
		scanf("%d", &n);
		if(n>0){
			s += n;
			i++;
		}
	}
	printf("%d | %d", s, s/10);	
	
	return 0;
}
