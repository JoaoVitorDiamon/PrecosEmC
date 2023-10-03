#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	//variaveis
	float preco;
	float TotalInflacao;
	
	printf("Qual o Preco do seu produto:");
	scanf("%f", &preco);

	//if e else
	if(preco>=100){
	
	TotalInflacao = preco * 20 / 100 + preco;
	
	}else {
		TotalInflacao = preco * 10 / 100 + preco;
	};
	
	//total
	printf("O Valor inflacionado e R$ %.2f", TotalInflacao);
	return 0;
}
