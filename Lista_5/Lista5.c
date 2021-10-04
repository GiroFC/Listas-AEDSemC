#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

////////////////////////////////EX01//////////////////////////////////

int fatorial(int n){
    int result=0;
    if (n >= 1){
    result = n*fatorial(n-1);
    } else
    result = 1;
    return result;
} 

void exercicio01(){
    system("cls");
    int a;
    printf("Digite um numero inteiro para saber o seu fatorial: ");
    scanf("%i", &a);

    printf("\nSeu fatorial e: %i", fatorial(a));
}

////////////////////////////////EX02//////////////////////////////////

int equacaoT(int n){
    int t;
    if(n > 2){
        t = 5 * n + equacaoT(pow((n-1), n));
    } else if (n == 1){
        t = 2;
    } else if (n == 2){
        t = 3;
    } else{}
    return t;
}

void exercicio02(){
    system("cls");
    int a;
    printf("Digite um numero inteiro para calcular o n-esimo termo da sequencia: ");
    scanf("%i", &a);

    printf("%i", equacaoT(a));
}

////////////////////////////////EX03//////////////////////////////////

int somatorio(int n){
    int soma;
    if(n > 0){
        soma = n + somatorio(n-1);
    } else{
        soma = 0;
    }
    return soma;
}

void exercicio03(){
    system("cls");
    int a;
    do{
        printf("Digite um numero inteiro positivo: ");
        scanf("%i", &a);
    } while(a < 0);

    printf("%i", somatorio(a));
}

////////////////////////////////EX04//////////////////////////////////

int binario(int n){
    if( n/2 !=0 ){
        binario(n/2);
    }
    printf("%i", n%2);
    return(n);
}
void exercicio04(){
    system("cls");
    int n;
    printf("Entre com o numero que dejesa transformar em binario: ");
    scanf("%i", &n);
    printf("Seu numero em binario e: ");
    binario(n);
}

////////////////////////////////EX05//////////////////////////////////

int multiplicacao(int a, int b){
    int result;
    if(a < 0 || b < 0){
        printf("Algum dos numeros digitados nao e natural!!");
    } else if(a == 0 || b == 0){
        result = 0;
    } else {
        result = a + multiplicacao(a, b-1);
    } return result;
}

void exercicio05(){
    system("cls");
    int x, y;
    printf("Digite dois numeros naturais para fazermos a multiplicacao deles: ");
    scanf("%i %i", &x, &y);
    printf("\n\n%i", multiplicacao(x, y));
}

////////////////////////////////EX06//////////////////////////////////

int mdc(int a, int b){
    int resultado;
    if(b == 0){
        resultado = a;
    } else {
        resultado = mdc(b, (a%b));
    } return resultado;
}

void exercicio06(){
    system("cls");
    int x, y;
    printf("Digite dois numeros positivos inteiros para calcular seu MDC: ");
    scanf("%i %i", &x, &y);
    printf("O MDC e: %i", mdc(x, y));
}

////////////////////////////////EX07//////////////////////////////////

int contador(int x){
    if(x == 0){
        return 0;
    }
    return 1 + contador(x/10);
} 

void exercicio07(){
    system("cls");
    int a;
    printf("Digite um numero inteiro e vamos contar quantos digitos ele tem: ");
    scanf("%i", &a);
    printf("Este numero tem %i digitos", contador(a));
}

////////////////////////////////EX08//////////////////////////////////

int primo(int x, int n){
    if( n < 2 ){ 
        return 1;
    }
    if( x >= n )
        return 0;

    if(n % x == 0){
        return 1; 
    }
    return primo(x + 1, n);
}
void exercicio08(){
    int a;
    printf("Entre com o numero que voce deseja saber se e primo: ");
    scanf("%i", &a);
     if(!primo(2, a)){
        printf("%i e primo", a);
    } else {
        printf("%i nao e primo", a);
    }
    return 0;
}

////////////////////////////////MAIN//////////////////////////////////


int main (void){
system("cls");
int atividades;
printf("----------------------------------------\n");
printf("\t*LISTA DE ATIVIDADES 05*\n");
printf("\t*Aluno: Igor Franco*\n");
printf("----------------------------------------\n");
printf("Digite o numero do ex que deseja ver:\n");
scanf("%d",&atividades);
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
default:
        printf("----------------------------------------\n");
        printf("ALTERNATIVA NAO VALIDA!!!\n");
        printf("----------------------------------------\n");
    break;
}
    return 0;
}