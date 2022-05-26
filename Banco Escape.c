//criação de um menu para realizar operaçoes do banco Escape
//Aluna: Leticia da Silva Bezerra
//turma de ADS D1
//OBJETIVOS:
//- Serviço para verificar o saldo de uma conta
//- Serviço para realizar um depósito
//- Serviço para realizar um saque de uma determinada conta corrente

#include<stdio.h>
#include<stdlib.h>

//estrutura contendo tudo que precisa 
struct conta{
	char nome[100]; // nome da pessoa
	float cc;// conta corrente 
	float pp;// conta poupança 
	//as duas variaveis a cima, receberam o valor do saldo. 
	
};

void main()
{
	int op=100;
	struct conta conta;// estrutura
	conta.pp=0;
	float aux;
	char nomeConta[100];
	printf("===========================================\n");
    printf("======Caixa Eletronico Banco Escape======\n");
    printf("===========================================\n\n");
    printf("===Digite seu nome:===\n");
	scanf("%100[^\n]s",&conta.nome);// comando pra nome com espaço
	printf("\nDigite o saldo atual da sua conta: ");
	scanf("%f",&conta.cc);
	printf("\nPara apresentar o menu\n");
	system("pause");// pause na tela
	//PROXIMA SESSAO SERA DE MENU
	while(op!=0)
	{
		system("cls");
		printf("Ola Sr(a) %s\n",conta.nome);
		printf("\t===MENU===\n");
		printf("[1] - Saldo de conta corrente\n");
		printf("[2] - Deposito\n");
		printf("[3] - Saque\n");
		printf("[0] - Sair\n");
		printf("DIGITE UMA OPCAO: \n");
		scanf("%d",&op);
		
		//SWITCH DE OPÇÃO!
		switch(op)
		{
			//Saque
			case 3:
				{
					printf("Digite o valor do saque : ");
					scanf("%f",&aux);
					if(conta.cc>0 && conta.cc>=aux)
					{
						conta.cc=conta.cc-aux;
						printf("Saque realizado com sucesso\n");
						printf("Sr(a) %s, o seu saldo atual da conta corrente: R$%2.f\n",conta.nome,conta.cc);
					}
					else 
						printf("Saldo insuficiente para saque\n");
					system("pause");
				}break;
			
			//Deposito
			case 2:
				{
					printf("Digite o valor para deposito: ");
					scanf("%f",&aux);
					if(aux>0)
					{
						conta.cc=conta.cc+aux;
						printf("\nDeposito realizado com sucesso\n");
						printf("Sr(a) %s, o seu saldo atual da conta corrente: R$%2.f\n",conta.nome,conta.cc);
						system("pause");
					}
					else
						printf("Impossivel depositar valor abaixo de 0");
				}break;
			
			
				//Saldo da conta corrente
				case 1:
					{
						printf("Sr(a) %s, o seu saldo atual da conta corrente: R$%2.f\n",conta.nome,conta.cc);
						system("pause");
					}break;
					
					
		}
	}
}
