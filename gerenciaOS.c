#include<stdio.h> 
#include<string.h>

struct setor{ char setnome[20]; };

struct servico{ char servnome[20]; };

struct oficina{ char oficinanome[20]; };

struct OrdemDeServico{ char descricao[20]; char solicitante[20]; char osstatus[20]; float valorserv; int contato; int nos; struct servico serv; struct setor set; struct oficina ofc; char data[10] };

struct servico serv1; struct servico serv2; struct servico serv3; struct setor s1; struct setor s2; struct setor s3;

struct oficina ofc1; struct oficina ofc2; struct oficina ofc3;

struct OrdemDeServico OS[20];

int nos;

main(){

strcpy(s1.setnome , "Administrativo");
strcpy(s2.setnome , "Operacional");
strcpy(s3.setnome , "Assistencial");

strcpy(serv1.servnome, "Corretiva");
strcpy(serv2.servnome, "Preventiva");
strcpy(serv3.servnome, "Programada");

strcpy(ofc1.oficinanome, "Eletrica");
strcpy(ofc2.oficinanome, "TI");
strcpy(ofc3.oficinanome, "Automacao");

int a=0, b=0 , c=0, x=0 , z=0, y=0 , s=0 , flag=0, d=0, o=0; char nome[20];

do{ system("cls"); printf("\n\t################### SISTEMA DE ABERTURA DE CHAMADOS (ORDENS DE SERVICO) #####################\n"); printf("\n1 - GERAR ORDEM DE SERVICO"); printf("\n2 - EXIBIR O.S GERADAS"); printf("\n3 - PESQUISAR ORDEM DE SERVICO"); printf("\n4 - CONCLUIR O.S");

printf("\n \n --ESCOLHA UMA OPCAO:  \n");
scanf("%d" , &b);
switch(b){
	case 1:
		do{
		printf("\n 1 - ** GERAR ORDEM DE SERVICO**");
		printf("\n\n DIGITE A DESCRICAO DO SERVICO:");
		scanf("%s" , &OS[x].descricao);
		printf("\n DIGITE O NOME DO SOLICITANTE:");
		scanf("%s" , &OS[x].solicitante);
		printf("\n DIGITE O NUMERO DE CONTATO DO SOLICITANTE:");
		scanf("%d" , &OS[x].contato);
		printf("\n INFORME O VALOR DO SERVICO ($):");
		scanf("%f" , &OS[x].valorserv);
	
	   strcpy(OS[x].osstatus, "ABERTA");

		printf("\n1 -**LISTA DE SETORES**");
		printf("\nO Setor 1: %s " , s1.setnome);
		printf("\nO Setor 2: %s " , s2.setnome);
		printf("\nO Setor 3: %s " , s3.setnome);
		
		printf("\n 1 -**SELECIONE O SETOR**");
        scanf("%d" , &y);
        if(y==1)
          OS[x].set = s1;
        if(y==2)
          OS[x].set = s2;
        else
		  OS[x].set = s3;
		
		printf("\n1 -**LISTA DE TIPOS DE SERVICO**");
		printf("\nO TIPO 1: %s " , serv1.servnome);
		printf("\nO TIPO 2: %s " , serv2.servnome);
		printf("\nO TIPO 3: %s " , serv3.servnome);
		
		printf("\n1 -**SELECIONE O SETOR DO SERVICO SOLICITADO**");
        scanf("%d" , &y);
        if(s==1)
          OS[x].serv = serv1;
        if(s==2)
          OS[x].serv = serv2;
        else
		  OS[x].serv = serv3;
		  
	    printf("\n1 -**LISTA DE OFICINAS RESPONSAVEIS**");
		printf("\n   OFICINA 1: %s " , ofc1.oficinanome);
		printf("\n   OFICINA 2: %s " , ofc2.oficinanome);
		printf("\n   OFICINA 3: %s " , ofc3.oficinanome);
	
		  
		printf("\n1 -**SELECIONE A OFICINA DO SERVICO SOLICITADO**");
        scanf("%d" , &o);
        if(o==1)
          OS[x].ofc = ofc1;
        if(s==2)
          OS[x].ofc = ofc2;
        else
		  OS[x].ofc = ofc3;
		x++;
		}while(c !=0);
		break;
		
		
	case 2:
		printf("\n2 - EXIBIR ORDENS DE SERVICO");
		if(x==0){
			printf("\n\n### LISTA ESTA VAZIA !! ####");
		}else{
			for(z=0; z < x ; z++){
			    printf("\n=========================================\n");
			    printf("\n\t\t  O.S DE NUMERO: %i " , OS[z].nos+z);
				printf("\n  SERVICO: %s " , OS[z].descricao);
			    printf("\n  SOLICITANTE: %s " , OS[z].solicitante);
                printf("\n  CONTATO: %d " , OS[z].contato);
  	            printf("\n  VALOR DO SERVICO : %.2f " , OS[z].valorserv);
  	            printf("\n  SETOR: %s " , OS[z].set);
  	            printf("\n  TIPO DE SERVICO: %s " , OS[z].serv);
  	            printf("\n  STATUS: %s " , OS[z].osstatus);
  	            printf("\n=========================================\n");
  	          	nos=2021000+z;
  	        
			}
		}
	
	break;
	
	case 3:
			printf("\n2 - BUSCAR ORDEM DE SERVICO");
		if(x==0){
			printf("\n\n### LISTA ESTA VAZIA !! ####");
		}else{
			printf("\n\nDigite um nome para pesquisa:");
			scanf("%s" , &nome);
			
			for(z=0; z < x ; z++){
				if(strcmp(nome, OS[z].descricao)==0){
					flag = 1;
					printf("\n\t\t  O.S DE NUMERO: %i " , OS[z].nos+z);
					printf("\n\n SERVICO: %s " , OS[z].descricao);
                    printf("\n   CONTATO: %d " , OS[z].contato);
  	                printf("\n   SALARIO: %.2f " ,OS[z].valorserv);
  	                printf("\n   STATUS: %s " , OS[z].osstatus);
  	                printf("\n   SETOR: %s " , OS[z].set);
  	                printf("\nSETOR: %s " , OS[z].serv);
  	                printf("\n=========================================\n");
				} //fim if
			      

			}//fim for
			if(flag==0)
			printf("\n### ORDEM DE SERVICO NAO CADASTRADA ####\n");
		
		} 
	flag = 0;    
	break;
	case 4:
				printf("\n2 - CONCLUIR ORDEM DE SERVICO");
		if(x==0){
			printf("\n\n### LISTA ESTA VAZIA !! ####");
		}else{
			printf("\n\nDigite um nome para pesquisa:");
			scanf("%s" , &nome);
			
			for(z=0; z < x ; z++){
				if(strcmp(nome, OS[z].descricao)==0){
					flag = 1;
						printf("\n### SERVICO LOCALIZADO ####\n");
						printf("\n\t\t  O.S DE NUMERO: %i " , OS[z].nos+z);
					printf("\n\n SERVICO: %s " , OS[z].descricao);
  	                printf("\n   SETOR: %s " , OS[z].set);
  	                printf("\n   TIPO DE SERVICO: %s " , OS[z].serv);
  	                
  	                	printf("\nDESEJA CONCLUIR A O.S DIGITE 1 OU 0 P/SAIR DA FUNCAO:");
  	                	scanf("%d" , &d);
  	                	
  	                	if(d==1)
  	                	strcpy(OS[z].osstatus , "CONCLUIDA");
  	                	
  	                	
  	                	printf("\n\n O.S CONCLUIDA  COM SUCESSO !!");
  	                	
  	                printf("\n=========================================\n");
				} //fim if
			      

			}//fim for
			if(flag==0)
			printf("\n### O.S NAO CADASTRADA ####\n");
		
		} 
		
		break;
}


 printf("\n\t*****DESEJA RETORNAR AO MENU, DIGITE 1 OU 0 (ZERO)  P/SAIR");
 scanf("%d" , &a);

}while(a !=0);

printf("\n### Obrigado por utilizar nosso sistema! Ate breve !! ##\n");

}