#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ex5 (){
	int valor, final;
    int cem, cinquenta, dez, cinco, dois, um ;
	//Notas de R$100, R$50, R$10, R$ 5, R$2 e R$1

    printf("\n==========|Exercicio 5|==========\n");

	printf("informe o valor: ");
	scanf("%d", &valor);
	
	cem = valor / 100;
	cinquenta = (valor - (cem *100)) / 50;
	dez = ((valor - (cem *100)) % 50) /10;
	cinco = (((valor - (cem *100)) % 50) % 10) / 5;
	dois = ((((valor - (cem *100)) % 50) % 10) % 5) / 2;
	um = (((((valor - (cem *100)) % 50) % 10) % 5) % 2) / 1;
	
	printf("\nNOTAS DE 100: %d notas", cem);
	printf("\nNOTAS DE 50:  %d notas", cinquenta);
	printf("\nNOTAS DE 10:  %d notas", dez);
	printf("\nNOTAS DE 5:   %d notas", cinco);
	printf("\nNOTAS DE 2:   %d notas", dois);
	printf("\nNOTAS DE 1:   %d notas", um);
}

void ex6 (){	
	double t = 0.01, g = 9.8, k = 0.5, vx, vy, x = 0, y = 0, rad, v0, graus0, tempo = 0;

	printf("\n==========|Exercicio 6|==========\n");

	printf("informe a velocidade inicial: ");
	scanf("%lf", &v0);
	
	printf("informe o angulo(graus): ");
	scanf("%lf", &graus0);
	
	rad = graus0 * (M_PI / 180);
	
	vx = v0 * cos(rad);
	vy = v0 * sin(rad);
	
	while (y >= 0) {
		
		vx = vx - k * vx * t;
		vy = vy - g * t - k * vy * t;
		
		x = x + vx * t;
		y = y + vy * t;
		
		tempo = tempo + t;
		
	}
	printf("Alcance horizontal: %.2f metros\n", x);
    printf("Tempo de voo: %.2f segundos\n", tempo);	
}

void ex7 (){
    float salario, inss;

	printf("\n==========|Exercicio 7|==========\n");
	 
    printf ("Digite o Salario Bruto: ");
    scanf("%lf", salario);

    if (salario <= 1412.00) {
        inss = salario * (100 / 7.5);
    }
    else if (salario > 1412.00, salario <= 2666.68){
        inss = salario * (100 / 9);
    }
    else if (salario > 2666.68, salario <= 4000,03){
        inss = salario * (100 / 12);
    }
    else {
        inss = salario * (100 / 14);
    }

    printf("\nDesconto do inss: R$ %.2f",inss);
}





int main(int argc, char *argv[]) {
	
	printf("=====================================================\n");
	printf("|                LISTA DE EXERCICIOS 03             |\n");
	printf("=====================================================\n");
	
    printf("Exercicios Disponiveis:\n");

	printf("EXERCICIO 5\n");
	printf("EXERCICIO 6\n");
	printf("EXERCICIO 7\n");
	printf("EXERCICIO 8\n");
	printf("EXERCICIO 9\n");

	int op;
	printf("\nEscolha qual quer visualizar: ");
	scanf("%d", &op);
	
	switch (op){
		case 5: {
			ex5 ();
			break;
		}
		case 6:{
			ex6 ();
			break;
		}
		
        case 7:{
			ex7 ();
			break;
		}
		/*
        case 8:{
			ex8 ();
			break;
		}
        case 9:{
			ex9 ();
			break;
		}
		*/
	return 0;
	}
}
