#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
---------------------------------------------------------------------------

int main() {
	struct{
		int matricula;
		char nomeEmpregado[50];
		char cpf[14];
		double salario;
		} empregado1,empregado2;
	
	typedef struct{
		int matricula;
		char nomeEmpregado[50];
		char cpf[14];
		double salario;
	}TIPO_EMPREGADO;
		TIPO_EMPREGADO empregado1, empregado2;
---------------------------------------------------------------------------

/*EXEMPLO 1 :
struct dadosEmpregado{
	int matricula;
	char nomeEmpregado[50];
	char cpf[14];
	double salario;
};
struct dadosEmpregado empregado1, empregado2;

main()
{
	printf("digite o nome: ");
		 gets(empregado1.nomeEmpregado);
	   fflush(stdin);

	printf("\ndigite o identificador da pessoa: ");
	  gets(empregado1.matricula);
	  scanf("%d", &empregado1.matricula);	
	   fflush(stdin);

	printf("\ndigite o CPF da pessoa: ");
	 	 gets(empregado1.cpf);
	system("pause");
}

---------------------------------------------------------------------------
 EXEMPLO 2 

struct lista_func{
	char nome[30];
	int idade;
}info[3];

main() {
	int i;
for(i=0;i<3;i++){
	printf("digite o nome: ");
		scanf("%s ", &info[i].nome);
	printf("digite a idade de : %s",info[i].nome);
		scanf("%d", &info[i].idade);	
}
for(i=0;i<3;i++){
	printf("\n %s ", info[i].nome);
	printf(" %d \n \n", info[i].idade);
}
	system("pause");
}
---------------------------------------------------------------------------
*/

