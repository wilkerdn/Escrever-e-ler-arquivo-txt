#include <stdio.h>

int main(){
	FILE *arquivo;
	
	arquivo = fopen("data.txt","w");
	
	if(arquivo == NULL){
		printf("Falha ao abrir o arquivo\n");
		return 0;
	}
	
	int dia=3, ano=2017;
	char mes[50] = "julho";
	
	printf("Dia: %d  Mes:%s  Ano:%d\n",dia,mes,ano);
	
	fprintf(arquivo, "%d %s %d", dia, mes, ano);
	
	fclose(arquivo);
	
	return 0;
	
}