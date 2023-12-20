/*1) Crie um jogo da forca. Usando um Vetor para armazenar uma String de
at� 12 letras, pe�a para o Jogador 1 escrever uma palavra que ser�
armazenada no vetor (Cada letra da palavra em uma posi��o). Pe�a os
nomes do jogador 1 e do jogador 2, escreva na tela o nome dos
jogadores , o tamanho da palavra e a primeira letra.
A cada vez que o jogador 1 entrar com a palavra (escondida do jogador
2) o Jogador 2 ter� 5 tentativas para descobrir a palavra. A cada
tentativa ser� impresso na tela o numero de tentativas do jogador. Caso
o jogador acerte a letra o programa dever� mostrar a posi��o da letra no
vetor. O vencedor ser� o jogador que conseguir em at� cinco tentativas
descobrir a palavra secreta, caso n�o seja descoberta o vencedor ser� o
jogador que digitou a palavra. No final imprima o nome do vencedor e
uma mensagem de parab�ns. O jogo dever� perguntar se os jogadores
querem jogar novamente ou encerrar o programa.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <locale.h>

char jogador1[15], jogador2[15], forca[12], tracejado[12], letra,resp;
	
	int quant,n,erro,teste_certo,flag_errado;

char dados()
{

	
	setlocale(LC_ALL,"portuguese");
	printf("\t\tBem vindo! \n\no Jogador 1 escolhe a palavra e o Jogador 2 TENTA acertar.\n\nESTE � O MELHOR JOGO DE FORCA QUE VOC� VAI JOGAR!!!\n\n\n");
	system("pause");
	system("cls");
	printf("Digite o seu nome JOGADOR 1:\n ");
	fflush(stdin);
	gets(jogador1);
	fflush(stdin);
	system("cls");
	printf("Digite o seu nome JOGADOR 2:\n ");
	fflush(stdin);
	gets(jogador2);
	fflush(stdin);
	system("cls");

}

main(){
	dados();
	do{
	printf("%s digite a palavra a ser adivinhada: \n\n ",jogador1);
	fflush(stdin);
	gets(forca);
	fflush(stdin);
	system("cls");
	quant=strlen(forca);
	printf("\t----------VAMOS AO JOGO!----------\n\n\n ");
	fflush(stdin);
fflush(stdin);	
	erro=5;
	teste_certo=0;

	fflush(stdin);
	for(n=0;n<quant;n++) tracejado[n]='-';

	do{
	printf("\nA palavra especial tem %d letras e come�a com a letra %c. \n\n\n ", quant,forca[0]);	
		fflush(stdin);
	printf("\t\t\t Sua palavra: %s\n\n\n",tracejado);
	printf("Digite uma letra %s: \n ",jogador2);
	fflush(stdin);
	scanf("%c",&letra);
	system("cls");
	fflush(stdin);
	flag_errado=0;
	for(n=0;n<quant;n++) if(letra==forca[n]){
		teste_certo++;
		flag_errado++;
		tracejado[n]=letra;
		fflush(stdin);
	}
	fflush(stdin);
	if(flag_errado==0){
		erro--;
		printf("\n\n\tVoc� errrrrrrroou! Tente novamente.\n\n");
		printf("Voc� ainda tem %d chances.\n\n",erro);
	}
	if(teste_certo>=quant)
	{
	system("cls");
	printf("\n\n\t\t\t---------Voc� ganhou!---------\n\n\n\t\t\t---------PARAB�NS!--------\n\n");
	}
	if(erro==0){
		system("cls");
		printf("\n\n\t\t\t-------VOC� PERDEU!-------\n\n\n\t\t\t");
	}
}while(teste_certo<quant && erro!=0);
printf("\nDeseja jogar novamente? (1-SIM/2-N�O)\n\n");                                
scanf("%d",&resp);
system("cls");
fflush(stdin);
}while(resp!=2);
printf("\n\n\n\t\t\t------AT� UMA PR�XIMA!--------\n\n\t\t\t\t------ <0/ -------\n\a");
fflush(stdin);
}



	
	



