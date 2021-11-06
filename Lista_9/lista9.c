#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

////////////////////////////////EX01//////////////////////////////////

void exercicio01(){
    int i = 4, *ptri;
    float f = 5.5, *ptrf;
    char c = 'i', *ptrc;

    ptri = &i;
    ptrf = &f;
    ptrc = &c;

    printf("\n\nDigitos antes da mudanca: %i %f %c", *ptri, *ptrf, *ptrc);
    printf("\n-----------------------------------------------------");

    i = 40;
    f = 50.5;
    c = 'h';
    printf("\nDigitos depois da mudanca: %i %f %c", *ptri, *ptrf, *ptrc);
}

////////////////////////////////EX02//////////////////////////////////

void exercicio02(){
    int x, y, *ptrx, *ptry;
    printf("Digite dois numeros inteiros: ");
    scanf("%i %i", &x, &y);

    ptrx = &x;
    ptry = &y;

    if(ptrx > ptry){
        printf("\n O primeiro digito tem endereco maior");
    } else if(ptrx < ptry){
        printf("\n O segundo digito tem endereco maior");
    } else {
        printf("\nEles sao iguais");
    }
}

////////////////////////////////EX03//////////////////////////////////
void troca(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

void exercicio03(){
    int x, y, *ptrx, *ptry;
    ptrx = &x;
    ptry = &y;
    printf("Digite dois numeros inteiros: ");
    scanf("%i %i", &x, &y);

    troca(ptrx, ptry);

    printf("\nDepois da troca de valores, temos: %i - %i", x, y);
}

////////////////////////////////EX04//////////////////////////////////
void maior(int *a, int *b){
    if(*a < *b){
        int aux = *a;
        *a = *b;
        *b = aux;
    } else;
}

void exercicio04(){
    int x, y, *ptrx, *ptry;
    ptrx = &x;
    ptry = &y;
    printf("Digite dois numeros inteiros: ");
    scanf("%i %i", &x, &y);

    maior(ptrx, ptry);

    printf("\nEm ordem decrescente, temos: %i - %i", x, y);
}

////////////////////////////////EX05//////////////////////////////////
int dobraesoma(int *a, int *b){
    int soma = 0;
    *a = *a * 2;
    *b = *b * 2;
    soma = *a + *b;
    return soma;
}

void exercicio05(){
    int x, y, *ptrx, *ptry;
    ptrx = &x;
    ptry = &y;
    printf("Digite dois numeros inteiros: ");
    scanf("%i %i", &x, &y);

    printf("\nE a soma deles e: %i", dobraesoma(ptrx, ptry));

    printf("\nDepois da funcao os valores sao: %i - %i", x, y);
    
}

////////////////////////////////EX06//////////////////////////////////
void somaparametro(int *a, int *b){
    *a = *a + *b;
}

void exercicio06(){
    int x, y, *ptrx, *ptry;
    ptrx = &x;
    ptry = &y;
    printf("Digite dois numeros inteiros: ");
    scanf("%i %i", &x, &y);

    somaparametro(&x, &y);

    printf("\nDepois da funcao os valores sao: %i - %i", x, y);
    
}

////////////////////////////////EX07//////////////////////////////////

void procedimento(char *frase[]){
    for(int i = 0; *frase[i] != '\0'; i++){
        if(*frase[i] == 'a'){
            *frase[i] == 'u';
        } else if(*frase[i] == 'e'){
            *frase[i] == 'o';
        } else if(*frase[i] == 'i'){
            *frase[i] == 'u';
        } else if(*frase[i] == 'o'){
            *frase[i] == 'a';
        }  else if(*frase[i] == 'u'){
            *frase[i] == 'e';
        } else;
    }
}

void exercicio07(){
    char string[100], *stringP = &string;
    printf("Digite uma frase de ate 100 caracteres: ");
    scanf(" %[^\n]s", &string);

    printf("\n %s", string);
    procedimento(*string);
    printf("\n %s", string);
}

////////////////////////////////EX08//////////////////////////////////

void exercicio08(){
    int array[10];
    for(int i = 0; i < 10; i++){
        printf("Digite o %i numero: ", i+1);
        scanf("%i", &array[i]);
    }

    for(int i = 0; i < 10; i++){
        printf("\n%i", &array[i]);
    }
}

////////////////////////////////EX09//////////////////////////////////

void dobra09(int *a){
    for(int i = 0; i < 5; i++){
        printf("%i - ", *(a+i) * 2);
    }
}

void exercicio09(){
    int x[5], *ptrx;
    ptrx = &x;
    printf("Digite cinco numeros inteiros: \n");
    for(int i = 0; i < 5; i++){
        printf("\nDigite o %i: ", i+1);
        scanf("%i", &x[i]);
    }

    dobra09(ptrx);
}

////////////////////////////////EX10//////////////////////////////////

void exercicio10(){
    int array[5];
    for(int i = 0; i < 5; i++){
        printf("Digite o %i numero: ", i+1);
        scanf("%i", &array[i]);
    }

    for(int i = 0; i < 5; i++){
        if(array[i] % 2 == 0){
            printf("\n%i", &array[i]);
        }
    }
}

////////////////////////////////EX11//////////////////////////////////

int ordenar(int *a, int *b, int *c){
    int um, dois, tres;

    if(*a < *b && *a < *b){
        um = *a;
    } else if(*b < *a && *b < *c){
        um = *b;
    } else if(*c < *a && *c < *b){
        um = *c;
    } 
    if(um == *a){
        if(*b < *c){
            dois = *b; 
        } else if(*b > *c){
            dois = *c;
        }
    } else if(um == *b){
        if(*a < *c){
            dois = *a; 
        } else if(*a > *c){
            dois = *c;
        }
    } else if(um == *c){
        if(*a < *b){
            dois = *a; 
        } else if(*a > *b){
            dois = *b;
        }
    } if(um == *a || um == *b && dois == *a || dois == *b){
        tres = *c;
    } else if(um == *b || um == *c && dois == *b || dois == *c){
        tres = *a;
    } else if(um == *a || um == *c && dois == *a || dois == *c){
        tres = *b;
    }

    return um,dois,tres;
}
 
void exercicio11(){
    int x[3], *ptrx;
    ptrx = &x;
    printf("Digite cinco numeros inteiros: \n");
    for(int i = 0; i < 3; i++){
        printf("\nDigite o %i: ", i+1);
        scanf("%i", &x[i]);
    }
    printf("\nordenados: %i", ordenar(x[0], x[1], x[2]));
}

////////////////////////////////EX13//////////////////////////////////

void exercicio13(){
    int arrayH[5];
    int *Parray = &arrayH;
    printf("Digite 5 numeros: \n");

    for(int i = 0; i < 5; i++){
        printf("Digite o %i numero", i+1);
        scanf("%i", *(Parray+i));
    }

    for(int i = 0; i < 5; i++){
        printf("%i - ", *(Parray+i));
    }
}   

////////////////////////////////EX14//////////////////////////////////

int negativos(float *vet, int N){
    int contador = 0;
    for(int i = 0; i < N; i++){
        if(*(vet+i) < 0){
            contador++;
        }
    }
    return contador;
}

void exercicio14(){
    int TAM;
    printf("Digite o tamanho da Array: \n");
    scanf("%i", TAM);
    int arrayH[TAM];
    int *Parray = &arrayH;
    printf("Digite %i numeros: \n", TAM);

    for(int i = 0; i < TAM; i++){
        printf("Digite o %i numero", i+1);
        scanf("%i", *(Parray+i));
    }

    printf("\n Existem %i numeros negativos nessa array.", negativos(Parray, TAM));
}

////////////////////////////////EX16//////////////////////////////////

int maiormenor(int *vet, int TAM){
    int maior= 0, menor = 0;

    for(int i = 0; i < TAM; i++){
        if(*(vet+i) > maior){
            maior = *(vet+i);
        } else if(*(vet+i) < maior){
            menor = *(vet+i);
        }
    } return maior, menor;
}   

void exercicio16(){
    int TAM;
    printf("Digite o tamanho da Array: \n");
    scanf("%i", TAM);
    int arrayH[5];
    int *Parray = &arrayH;
    printf("Digite 5 numeros: \n");

    for(int i = 0; i < 5; i++){
        printf("Digite o %i numero", i+1);
        scanf("%i", *(Parray+i));
    }

    printf("\nEm ordem o maior e o menos sao: %i", maiormenor(Parray, TAM));
}

////////////////////////////////MAIN//////////////////////////////////

int main(void)
{
    system("cls");
    int atividades;
    printf("----------------------------------------\n");
    printf("\t*LISTA DE ATIVIDADES 09*\n");
    printf("\t*Aluno: Igor Franco*\n");
    printf("----------------------------------------\n");
    printf("Digite o numero do ex que deseja ver:\n");
    scanf("%d", &atividades);
    switch (atividades)
    {
    case 1:
        exercicio01();
        break;
    case 2:
        exercicio02();
        break;
    case 3:
        exercicio03();
        break;
    case 4:
        exercicio04();
        break;
    case 5:
        exercicio05();
        break;
    case 6:
        exercicio06();
        break;
    case 7:
        exercicio07();
        break;
    case 8:
        exercicio08();
        break;
    case 9:
        exercicio09();
        break;
    case 10:
        exercicio10();
        break;
    case 11:
        exercicio11();
        break;
    case 13:
        exercicio13();
        break;
    case 14:
        exercicio14();
        break;
    case 16:
        exercicio16();
        break;

    default:
        printf("----------------------------------------\n");
        printf("ALTERNATIVA NAO VALIDA!!!\n");
        printf("----------------------------------------\n");
        break;
    }
    return 0;
}