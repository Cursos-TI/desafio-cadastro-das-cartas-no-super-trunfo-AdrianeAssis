#include <stdio.h>

int main (){

//declaração de variáveis

    int cartaestado = 1, cartacidade = 1;
    char estado[20];
    char cidade [20];
    int populacao = 0;
    float area = 0.0;
    float pib = 0.0;
    int pturistico = 0;

//início da leitura de dados 

while (cartaestado <= 8){												//estrutura de repetição para a leitura do dado ESTADO.
	printf ("\nDigite o Estado: ");
    scanf("%s" , &estado);
	
	int cartacidade = 1;
	
	while (cartacidade <= 4){											//estrutura de repetição para a leitura dos dados relacionados aos Estados.
		printf ("\nDigite a Cidade: ");
		scanf("%s" , &cidade);
		
		printf ("Digite a População: ");
		scanf("%d", &populacao);
		
		printf("Digite a Área M²: ");
		scanf("%f", &area);
		
		printf("Digite o PIB: R$ ");
		scanf("%f", &pib);
		
		printf("Digite a quantidade de Pontos Turísticos: ");
		scanf("%d", &pturistico);
		
		
		printf("\n ***** Você inseriu a carta: *****\n\nESTADO: %s\nCIDADE: %s\n	POPULAÇÃO: %d\n", estado, cidade, populacao);			//apresentação dos dados
		printf("	ÁREA M²: %.2f\n	PIB: R$%.2f\n	PONTOS TURÍSTICOS: %d\n",area, pib, pturistico);												// inseridos para o usuário
		
		cartacidade++;}


	cartaestado++;}
	
    return 0;
}
