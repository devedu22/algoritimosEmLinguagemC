#include<stdio.h> 
#include<stdlib.h>
#include<locale.h>

main(){

setlocale(LC_ALL, "Portuguese");

char funcionario[70];
float  atestado, falta, saida, atrasos, totalhoras, totalfinal, totaldescont, horascobridas, totalcobridas;
int i;

printf("\nBEM-VINDO(A) A FERRAMENTA DE CÁLCULO DE  HORAS - RH :\n\n");
printf("PROJETO IDEALIZADO POR: Eduardo Cavalcante - CCO\n\n"); printf("****OBJETIVO: OTIMIZAR O PROCESSO DE PREENCHIMENTO DO RELATÓRIO DE HORAS - RH ****\n\n");

while(atrasos,i<99){
i=i+1;
 printf("\n NOME DO FUNCIONÁRIO:");
  fflush(stdin);


fflush(stdin);
  gets(funcionario);

	printf("Total de horas trabalhadas:\n");
scanf("%f",&totalhoras);
	printf("Descontos por ATESTADO:\n");
scanf("%f",&atestado);
	printf("Descontos por FALTA:\n");
scanf("%f",&falta);
	printf("Descontos por SAÍDA ANTECIPADA:\n");
scanf("%f",&saida);
printf("Descontos por ATRASOS:\n");
scanf("%f",&atrasos);
	printf("Se o funcionário teve seu plantão cobrido no dia, informe o horário:\n");
scanf("%f",&horascobridas);



totaldescont = atestado+falta+saida+atrasos;
totalfinal = (totalhoras-totaldescont);
totalcobridas = totalfinal+horascobridas;
printf("FUNCIONÁRIO (A):%s\n",funcionario);
printf("TOTAL DE HORAS TRABALHADAS (COM DESCONTOS)........: %.2f \n", totalfinal);
printf("TOTAL DE HORAS TRABALHADAS (COM DIA COBERTO POR OUTRO FUNCIONÁRIO)........: %.2f \n", totalcobridas);

} system("pause");

}