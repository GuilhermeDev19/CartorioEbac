#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s" , cpf);
	
	strcpy(arquivo, cpf);
	
	FILE *file;
	file = fopen(arquivo, "w");
	fprintf(file,cpf);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");
	fprintf(file, nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file);
		
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file, cargo);
	fclose(file);
	
	system("pause");
	
}

int consulta()
{
     char cpf [40];
     char conteudo [200];
     
     printf("Digite o cpf a ser consultado: ");
     scanf("%s", cpf);
     
     FILE *file;
     file = fopen(cpf, "r");
     
     if(file == NULL)
     {
     	printf("Arquivo n�o encontrado!.\n");
	 }
	 
	 while(fgets(conteudo, 200, file) != NULL)
     {
     	printf("\nEssas s�o as informa��es do usu�rio: ");
     	printf("%s", conteudo);
     	printf("\n\n");
	 }
	 
	 system("pause");
}

int deletar()
{
}

int main()
    { 
	int opcao=0;
	int x=1;
	
    for(x=1;x=1;)
    {
 
	   system("cls");
	
	setlocale(LC_ALL, "Portuguese");
	printf ("### Cart�rio Ebac ### \n\n");
	printf("\t1 - Registrar novo usu�rio \n");
	printf("\t2 - Consultar \n");
	printf("\t3 - Deletar usu�rio \n\n");
	printf("\t4 - Sair do sistema\n\n");
	printf("Op��o: ");
	
	scanf("%d" , &opcao);
	
	system("cls");
	 
  	switch(opcao)
    {
    
	    case 1:
		registro();
    	break;
    	
        case 2:
    	consulta();
    	break;
    	
    	case 3:
    	deletar();
    	break;
    	
    	case 4:
        printf("Obrigado por utilizar o sistema!\n");
        return 0;
        break;     
             
    	
    	default:
    	printf("Essa op��o n�o esta disponivel!\n");
    	system("pause");
    	break;

}

}
}
