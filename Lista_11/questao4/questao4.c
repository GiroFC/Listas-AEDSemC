#include <stdio.h>
#include <string.h>
#include <math.h>

void copiaConteudo(FILE *fp1, FILE *fp2){
    char leitor[1000];
    while(fgets(leitor, 1000, fp1) != NULL){
        fputs(leitor, fp2);
    }
}

void main(){
    
    int c, nlinhas1 = 1, nlinhas2 = 1;
    FILE *fp1, *fp2;
    char *arqu;

printf("Digite o nome do arquivo ja existente que você deseja copiar: ");
gets(arqu);

fp1 = fopen(arqu, "r");
fp2 = fopen("copia", "w");

copiaConteudo(fp1, fp2);


fclose(fp1);
fclose(fp2);



printf("\n\n %i %i", nlinhas1, nlinhas2);
}