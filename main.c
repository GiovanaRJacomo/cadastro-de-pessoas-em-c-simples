#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

int main(){ char usu[10]; char s[10]; char *n; char cpf[11]; char *end[60]; char em[60]; char *tel[30];

int id;
char *comorb;
int rc;

printf("Login\n");
printf("\nInsira o nome de usuario : ");
scanf("%s",&usu);
printf("\nInsira a senha : ");
scanf("%s",&s);

if (strcmp(usu,"unip")==0){
	if(strcmp(s,"1234")==0){

	printf("\nLogin feito com exito");
	printf("\n\nNome : ");
	scanf("%s",&n);
	setbuf(stdin,NULL);

	printf("\nCPF : ");
	scanf("%s",&cpf);
	setbuf(stdin, NULL);

	printf("\nTel :");
	scanf("%s",&tel);
	setbuf(stdin, NULL);

	printf("\nEmail :");
	scanf("%s",&em);
	setbuf(stdin, NULL);

	printf("\n");
	printf("\nAnos de idade :");
	scanf("%s",&id);
	setbuf(stdin, NULL);

	printf("\nEndereco do paciente");

	printf("\n\nNumero da casa :");
	scanf("%s",&end[0]);
	setbuf(stdin, NULL);
	printf("\nRua do paciente :");
	scanf("%s",&end[1]);
	setbuf(stdin,NULL);

	printf("\nBairro do paciente :");
	scanf("%s",&end[2]);
	setbuf(stdin,NULL);
	printf("\nCidade do paciente :");
	scanf("%s",&end[3]);
	setbuf(stdin,NULL);


	printf("\n\nComorbidades");
	printf("\n 1-Diabetes \n 2-Pneumopatias Cronicas \n 3-Obesidade Morbida \n 4-Cirrose Hepatica \n 5-Insuficiencia cardiaca \n 6-Outras Comorbidades");
	printf("\nSelecione a Comorbidade do paciente:");
	scanf("%d",&rc);

	printf("\nDados do Paciente\n");
	printf("\nNome :%s",&n);
	printf("\nCPF :%s",&cpf);
	printf("\nTelefone :%s",&tel);
	printf("\nEndereco");
	printf("\nNumero :%s,",&end[0]);
	printf(" Rua : %s",&end[1]);
	printf("\nBairro :%s,",&end[2]);
	printf(" Cidade :%s,",&end[3]);
	printf("\nIdade :%s",&id);
	printf("\nEmail :%s",&em);
	if(rc==1){
		printf("\nComorbidade: Diabetes");
	}
	else if(rc==2){
		printf("\nComorbidade: Pneumopatias Cronicas");
	}
	else if(rc==3){
		printf("\nComorbidade: Obesidade Morbita");
	}
	else if(rc==4){
		printf("\nComorbidade: Cirrose Hepatica");
	}
	else if(rc==5){
		printf("\nComorbidade: Insuficiencia Cardiaca");
	}
	else if(rc==6){
		printf("\nPaciente possui outra(s) Comorbidades");
	}
	else{
		printf("\nDados Invalidos");
	}

	printf("\nDados do paciente salvos");

	if(id>=60){
		printf("\nPaciente salvo como membro da terceira idade, risco extremo");
		}
	else{
		printf("\nPaciente nao faz parte da terceira idade");
	}
 		}
	else{
		printf("\nSenha incorreta");
	}
	}else{
		printf("\nUsuario Nao existente");
	}
	return 0;
 }
