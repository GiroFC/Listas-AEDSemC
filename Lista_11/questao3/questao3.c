#include <stdio.h>
#include <string.h>
#include <math.h>

void main(){
    
int c, ncaracteres= 0;
FILE *fp;

fp = fopen("arqui1.txt", "r");

while ((c=fgetc(fp)) != EOF)

    if(c!='\n') ncaracteres++;


fclose(fp);



printf("\n\n %i caracteres", ncaracteres);
}