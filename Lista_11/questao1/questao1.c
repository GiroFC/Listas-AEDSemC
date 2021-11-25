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
    FILE *fp1, *fp2, *fp3;

fp1 = fopen("arquivo1.txt", "r");
fp2 = fopen("arquivo2.txt", "r");
fp3 = fopen("arquivo3.txt", "w");

while ((c=fgetc(fp1)) != EOF)

    if(c=='\n') nlinhas1++;

while ((c=fgetc(fp2)) != EOF)
    if(c=='\n') nlinhas2++;

copiaConteudo(fp1, fp3);
copiaConteudo(fp2, fp3);


fclose(fp1);
fclose(fp2);
fclose(fp3);

}