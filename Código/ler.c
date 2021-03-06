#include <stdio.h>

int main(){
	FILE *arquivo;
	
	arquivo = fopen("data.txt","r");
	
	if(arquivo == NULL){
		printf("Falha ao abrir o arquivo\n");
		return 0;
	}
	
	int dia, ano;
	char mes[50];
	
	fscanf(arquivo, "%d %s %d", &dia, mes, &ano);
	
	printf("Dia: %d  Mes:%s  Ano:%d\n",dia,mes,ano);
	
	fclose(arquivo);
	
	return 0;
	
}