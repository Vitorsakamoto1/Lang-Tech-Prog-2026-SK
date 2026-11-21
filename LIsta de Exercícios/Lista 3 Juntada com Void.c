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
    double salario, inss;

    printf("\n==========|Exercicio 7|==========\n");

    printf("Digite o Salario Bruto: ");
    scanf("%lf", &salario);

    if (salario <= 1412.00) {
        inss = salario * 0.075;
    }
    else if (salario <= 2666.68){
        inss = salario * 0.09;
    }
    else if (salario <= 4000.03){
        inss = salario * 0.12;
    }
    else {
        inss = salario * 0.14;
    }

    printf("\nDesconto do inss: R$ %.2f", inss);
}

void ex8 (){
    double salario, inss, salarioBase, irpf;

    printf("\n==========|Exercicio 8|==========\n");

    printf("Digite o Salario Bruto: ");
    scanf("%lf", &salario);

    // Calculo do INSS
    if (salario <= 1412.00) {
        inss = salario * 0.075;
    }
    else if (salario <= 2666.68){
        inss = salario * 0.09;
    }
    else if (salario <= 4000.03){
        inss = salario * 0.12;
    }
    else {
        inss = salario * 0.14;
    }

    // Salario base = Bruto - INSS
    salarioBase = salario - inss;

    // Calculo do IRPF: (Salario Base * Aliquota) - Deducao
    if (salarioBase <= 2259.20) {
        irpf = 0;
    }
    else if (salarioBase <= 2826.65){
        irpf = (salarioBase * 0.075) - 169.44;
    }
    else if (salarioBase <= 3751.05){
        irpf = (salarioBase * 0.15) - 381.44;
    }
    else if (salarioBase <= 4664.68){
        irpf = (salarioBase * 0.225) - 662.77;
    }
    else {
        irpf = (salarioBase * 0.275) - 896.00;
    }

    printf("\nDesconto do INSS: R$ %.2f", inss);
    printf("\nSalario base (Bruto - INSS): R$ %.2f", salarioBase);
    printf("\nIRPF retido: R$ %.2f", irpf);
}

void ex9 (){
    double valorHora, horas, salario, inss, salarioBase, irpf, liquido;

    printf("\n==========|Exercicio 9|==========\n");

    printf("Digite o valor da hora trabalhada: ");
    scanf("%lf", &valorHora);

    printf("Digite a quantidade de horas no mes: ");
    scanf("%lf", &horas);

    // Salario Bruto = Horas * Valor
    salario = horas * valorHora;

    // Calculo do INSS
    if (salario <= 1412.00) {
        inss = salario * 0.075;
    }
    else if (salario <= 2666.68){
        inss = salario * 0.09;
    }
    else if (salario <= 4000.03){
        inss = salario * 0.12;
    }
    else {
        inss = salario * 0.14;
    }

    // Salario base = Bruto - INSS
    salarioBase = salario - inss;

    // Calculo do IRPF: (Salario Base * Aliquota) - Deducao
    if (salarioBase <= 2259.20) {
        irpf = 0;
    }
    else if (salarioBase <= 2826.65){
        irpf = (salarioBase * 0.075) - 169.44;
    }
    else if (salarioBase <= 3751.05){
        irpf = (salarioBase * 0.15) - 381.44;
    }
    else if (salarioBase <= 4664.68){
        irpf = (salarioBase * 0.225) - 662.77;
    }
    else {
        irpf = (salarioBase * 0.275) - 896.00;
    }

    // Salario Liquido
    liquido = salario - inss - irpf;

    // Contra-cheque
    printf("\n=====================================================\n");
    printf("    RECIBO DE PAGAMENTO DE SALARIO (CONTRA-CHEQUE)\n");
    printf("=====================================================\n");
    printf(" Salario Bruto (Horas x Valor):   R$ %10.2f\n", salario);
    printf(" (-) Desconto INSS:               R$ %10.2f\n", inss);
    printf(" (-) Desconto IRPF:               R$ %10.2f\n", irpf);
    printf("-----------------------------------------------------\n");
    printf(" LIQUIDO A RECEBER:               R$ %10.2f\n", liquido);
    printf("=====================================================\n");
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
        case 8:{
			ex8 ();
			break;
		}
        case 9:{
			ex9 ();
			break;
		}
	return 0;
	}
}
