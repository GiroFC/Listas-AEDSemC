#include <stdio.h>
#include <string.h>
#include <math.h>

void main(){
    
    int c, npalavras = 0;
    FILE *fp;

fp = fopen("contadordepalavras.txt", "r");

while ((c=fgetc(fp)) != EOF)

    if(c==' ') npalavras++;


fclose(fp);



printf("\n\n %i", npalavras);
}