#include <stdio.h>
int main(){
float num1 = 0;
float num2 = 0;
int op = 0;
float soma = 0;
float subtrair = 0;
float multiplicar = 0;
float dividir = 0;
printf("Digite o valor do primeiro numero:\n");
scanf("%f", &num1);
printf("Digite o valor do segundo numero:\n");
scanf("%f", &num2);
printf("Digite a operacao necessaria \n 1-Somar \n 2-Subtrair \n 3-Dividir \n 4-Mutiplicar \n");
scanf("%d", &op);

if (op == 1){

	soma = num1 + num2;
	printf("O resultado da Soma:%.2f",soma);
}

if (op == 2){

	subtrair = num1 - num2;
	printf("O resultado da Subtracao:%.2f",subtrair);
}
if (op == 3){

	dividir = num1 / num2;
	printf("O resultado da Divisao:%.2f",dividir);
}
if (op == 4){

	multiplicar = num1 * num2;
	printf("O resultado da Multiplicacao:%.2f",multiplicar);
}
		
	
	
}
