#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	//variaveis
	float preco;
	float total;
	
	printf("Qual o Preco do seu produto:");
	scanf("%f", &preco);

	//if e else
	if(preco>=100){
	
	total = preco * 20 / 100 + preco;
	
	}else {
		total = preco * 10 / 100 + preco;
	};
	
	//total
	printf("O Valor e R$ %.2f", total);
	return 0;
}
