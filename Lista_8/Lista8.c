#include <stdio.h>
#include <stdlib.h>
#include <math.h>

////////////////////////////////EX01//////////////////////////////////

void exercicio01()
{
    char string01[100];

    printf("\nDigite uma frase para preencher a string: ");
    scanf(" %[^\n]s", &string01);

    printf("\nEsta e a frase digitada: %s", string01);
}

////////////////////////////////EX02//////////////////////////////////

void exercicio02()
{
    char string02[100];
    int i = 0;
    printf("\nDigite uma frase para preencher a string: ");
    scanf(" %[^\n]s", &string02);

    while (string02[i] != '\0')
        i++;

    printf("\nA frase tem %i caracteres.", i);
}

////////////////////////////////EX03//////////////////////////////////

void exercicio03()
{
    char string03[100];

    printf("\nDigite seu nome, se ele comecar com a letra 'a' sera impresso no final: ");
    scanf(" %[^\n]s", &string03);

    if (string03[0] == 'a' || string03[0] == 'A')
    {
        printf("%s", string03);
    }
    else
    {
        printf("Seu nome nao comeca com a letra 'a'");
    }
}

////////////////////////////////EX04//////////////////////////////////

void exercicio04()
{
    char string04[100];

    printf("\nDigite seu nome, se ele comecar com a letra 'a' sera impresso no final: ");
    scanf(" %[^\n]s", &string04);

    printf("\n\nSeu nome com apenas 4 letras: \n\n");

    for (int i = 0; i < 4; i++)
    {
        printf("%c", string04[i]);
    }
}

////////////////////////////////EX05//////////////////////////////////

void exercicio05()
{
    char string05[100];
    int maiusculas = 0, i = 0;

    printf("\nDigite seu nome e contaremos quantas maiusculas ele possui: ");
    scanf(" %[^\n]s", &string05);

    while (string05[i] != '\0')
    {
        if (string05[i] >= 'A' && string05[i] <= 'Z')
        {
            maiusculas++;
        }
        i++;
    }

    printf("\nSeu nome possui %i letras maiusculas", maiusculas);
}

////////////////////////////////EX06//////////////////////////////////

void exercicio06()
{
    char nome[100];
    char sexo;
    int idade = 0;

    printf("\nDigite seu nome: ");
    scanf(" %[^\n]s", nome);
    printf("\nAgora sua idade: ");
    scanf(" %i", &idade);
    printf("\nAgora o seu sexo (M ou F): ");
    scanf(" %c", &sexo);

    printf("\n\n-----------------Verificacao-----------------------\n\n");

    if (sexo == 'F' && idade < 25)
    {
        printf("%s ---- ACEITA", nome);
    }
    else
    {
        printf("%s ---- NAO ACEITA", nome);
    }
}

////////////////////////////////EX07//////////////////////////////////

void exercicio07()
{
    char string1[100];
    char string2[100];
    int contador1 = 0;
    int contador2 = 0;

    printf("\nDigite duas strings para compararmos ela: ");
    printf("\nString 1: ");
    scanf(" %[^\n]s", &string1);
    printf("\nString 2: ");
    scanf(" %[^\n]s", &string2);

    for (int i = 0; string1[i] != '\0'; i++)
    {
        contador1++;
    }
    for (int j = 0; string2[j] != 0; j++)
    {
        contador2++;
    }

    if (contador1 > contador2)
    {
        printf("A primeira e maior que a segunda");
    }
    else if (contador2 > contador1)
    {
        printf("A segunda e maior que a primeira");
    }
    else
    {
        printf("Elas sao iguais");
    }
}

////////////////////////////////EX08//////////////////////////////////

void exercicio08()
{
    char string08[100];
    int contadorbin = 0;
    printf("\nDigite um numero binario ququer para contarmos os 1's: ");
    scanf(" %[^\n]s", &string08);

    for (int i = 0; string08[i] != '\0'; i++)
    {
        if (string08[i] == '1')
        {
            contadorbin++;
        }
    }

    printf("\n Existem %i 1's", contadorbin);
}

////////////////////////////////EX09//////////////////////////////////

void exercicio09()
{
    char string09[100];
    printf("\nDigite um numero binario para trocarmos os 0's por 1's: ");
    scanf(" %[^\n]s", &string09);

    for (int i = 0; string09[i] != '\0'; i++)
    {
        if (string09[i] == '0')
        {
            string09[i] = '1';
        }
    }

    printf("\n Este eh o resultado %s", string09);
}

////////////////////////////////EX10//////////////////////////////////

int contador(char string[])
{
    int cont = 0;
    int i;
    for (i = 0; string[i] != '\0'; i++)
    {
        cont++;
    }
    return cont;
}

char inverter(char string[])
{
    int i, aux, fim, tam = contador(string);

    fim = tam - 1;
    for (i = 0; i <= tam / 2; i++)
    {
        aux = string[i];
        string[i] = string[fim];
        string[fim] = aux;
        fim--;
    }
}

void exercicio10()
{
    char string10[100];
    printf("\nDigite uma frase para invertermos ela: ");
    scanf(" %[^\n]s", &string10);

    printf("%c", inverter(string10));
}

////////////////////////////////EX11//////////////////////////////////

void exercicio11()
{
    char string11[100];
    printf("\nDigite uma string para retirarmos as vogais: ");
    scanf(" %[^\n]s", &string11);

    for (int i = 0; string11[i] != '\0'; i++)
    {
        if (string11[i] == 'A' || string11[i] == 'a' || string11[i] == 'E' || string11[i] == 'e' || string11[i] == 'I' || string11[i] == 'i' || string11[i] == 'O' || string11[i] == 'o' || string11[i] == 'U' || string11[i] == 'u')
        {
            string11[i] == " ";
        }
    }

    printf("\nFrase sem vogais: %s", string11);
}

////////////////////////////////EX12//////////////////////////////////

void exercicio12()
{
    char string12[100];
    char x;
    printf("\nDigite uma string: ");
    scanf(" %[^\n]s", &string12);
    printf("\nAgora digite um cartere qualquer: ");
    scanf(" %s", &x);

    printf("\nTrocando as vogais da string pelo caratere: ");

    for (int i = 0; string12[i] != '\0'; i++)
    {
        if (string12[i] == 'A' || string12[i] == 'a' || string12[i] == 'E' || string12[i] == 'e' || string12[i] == 'I' || string12[i] == 'i' || string12[i] == 'O' || string12[i] == 'o' || string12[i] == 'U' || string12[i] == 'u')
        {
            string12[i] == x;
        }
    }

    printf(" %s", string12);
}

////////////////////////////////EX13//////////////////////////////////

void exercicio13()
{
    char string13[100];
    int conta = 0;
    char x;
    printf("\nDigite uma string: ");
    scanf(" %[^\n]s", &string13);

    for (int i = 0; string13[i] != '\0'; i++)
        if (string13[i] == ' ')
        {
            conta++;
        }

    printf("A string tem %i espaços em branco", conta);
}

////////////////////////////////EX14//////////////////////////////////

void exercicio14()
{
    char string14[50];
    printf("\nDigite uma string de no maximo 50 caracteres: ");
    scanf(" %[^\n]s", &string14);

    for (int i = 0; string14[i] != '\0'; i++)
    {
        string14[i] += 1;
    }

    printf(" %s", string14);
}

////////////////////////////////EX15//////////////////////////////////

void exercicio15()
{
    char string15[100];
    printf("\nDigite uma string para trocarmos as maiusculas por minusculas: ");
    scanf(" %[^\n]s", &string15);

    for (int i = 0; string15[i] != '\0'; i++)
    {
        if (string15[i] >= 65 && string15[i] <= 90)
        {
            string15[i] = string15[i] + 32;
        }
    }

    ptrinf(" %s", string15);
}

////////////////////////////////EX16//////////////////////////////////

void exercicio16()
{
    char string16[100];
    printf("\nDigite uma string para trocarmos as minusculas  por maiusculas: ");
    scanf(" %[^\n]s", &string16);

    for (int i = 0; string16[i] != '\0'; i++)
    {
        if (string16[i] >= 97 && string16[i] <= 122)
        {
            string16[i] = string16[i] - 32;
        }
    }

    ptrinf(" %s", string16);
}

////////////////////////////////EX17//////////////////////////////////

void exercicio17()
{
    char string17[100];
    printf("\nDigite uma string para retirarmos os espaços: ");
    scanf(" %[^\n]s", &string17);

    for (int i = 0; string17[i] != '\0'; i++)
    {
        if (string17[i] == ' ')
        {
            string17[i] = string17[i + 1];
        }
    }

    ptrinf(" %s", string17);
}

////////////////////////////////EX19//////////////////////////////////

void exercicio19()
{
    char vetornomes[10][100];
    int vetoridades[10];
    int maior, menor;
    printf("\nDigite o nome de 10 pessoas: ");

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; vetornomes[i][j] != '\0'; j++)
        {
            scanf(" %[^\n]s", &vetornomes[i]);
        }
    }

    printf("Agora digite a idade dos mesmos: ");

    for (int i = 0; i < 10; i++)
    {
        printf("Pessoa %i", i + 1);
        scanf("%i", &vetoridades[i]);
    }

    for (int i = 1; i < 10; i++)
    {
        if (vetoridades[i] > vetoridades[i - 1])
        {
            maior = vetoridades[i];
        }
    }

    for (int i = 1; i < 10; i++)
    {
        if (vetoridades[i] < vetoridades[i - 1])
        {
            menor = vetoridades[i];
        }
    }

    printf("\nO maior é %s com %i anos", vetornomes[maior], vetoridades[maior]);
    printf("\nO menor é %s com %i anos", vetornomes[menor], vetoridades[menor]);
}

////////////////////////////////EX21//////////////////////////////////

void exercicio21(){
    char string21[100], string21s[100];
    printf("\nDigite uma string: ");
    scanf(" %[^\n]s", &string21);
    printf("\nDigite outra string string: ");
    scanf(" %[^\n]s", &string21s);

    for (int i = 0; string21[i] != '\0'; i++)
    {
        if (string21[i] == 'A' || string21[i] == 'a'){
            string21[i] == '*';
        }
    }
    for (int i = 0; string21s[i] != '\0'; i++)
    {
        if (string21s[i] == 'A' || string21s[i] == 'a'){
            string21s[i] == '*';
        }
    }

    printf("\n %s", inverter(string21));
    printf("\n %s", inverter(string21s));
}

////////////////////////////////EX23//////////////////////////////////

void exercicio23(){
    char string23[100];
    int i, j;
    printf("\nDigite uma string: ");
    scanf(" %[^\n]s", &string23);

    printf("\n agora digite dois numeros inteiros: ");
    scanf("%i %i", &i, &j);

    for(int x = 0; x < i; x++){
        string23[x] = ' ';
    }

    printf("\n %s", string23[j]);
}

////////////////////////////////EX24//////////////////////////////////

void exercicio24(){
    char string24[100];
    int i;
    char c;
    int contador;
    printf("\nDigite uma string: ");
    scanf(" %[^\n]s", &string24);
    printf("\nDigite um carectere: ");
    scanf(" %c", &c);
    printf("\nAgora digite um inteiro: ");
    scanf("%i", i);

    for(int x = i; string24[x] == c; x++){
        contador++;
    }

    pritntf("O carectere apareceu depois de %i posicoes depois da posicao informada.", contador);
}

////////////////////////////////EX25//////////////////////////////////

void alfabetica(char string[], char string2[], int parametro){
    parametro = 0;
    if(string[parametro] > string2[parametro]){
        printf("\n A primeira é menor que a segunda string.");
    } else if(string[parametro] < string2[parametro]){
        printf("\n A segunda é menor que a primeira string.");
    } else if(string[parametro] = string2[parametro]){
        alfabetica(string, string2, parametro+1);
    }
}

void exercicio25(){
    int x = 0;
    char string25[100], string25s[100];
    printf("\nDigite uma string: ");
    scanf(" %[^\n]s", &string25);
    printf("\nDigite outra string string: ");
    scanf(" %[^\n]s", &string25s);

    alfabetica(string25, string25s, x);
}

////////////////////////////////EX26//////////////////////////////////

void exercicio26(){
    char string26[100];
    printf("\nDigite uma string para ser criptografada: ");
    scanf(" %[^\n]s", &string26);

    for(int i = 0; string26[i] !='\0'; i++){
        if(string26[i] >= 65 && string26[i] <= 122){
            string26[i] +=3;
        } else;
    }

    printf("\n a string criptografada é %s", string26);
}

////////////////////////////////EX27//////////////////////////////////

void exercicio27(){
    char string27[100];
    printf("\nDigite uma string para ser criptografada: ");
    scanf(" %[^\n]s", &string27);

    if(string27 == inverter(string27)){
        printf("A string e palindroma");
    } else{
        printf("A string nao e palindroma");
    }
}

////////////////////////////////MAIN//////////////////////////////////

int main(void)
{
    system("cls");
    int atividades;
    printf("----------------------------------------\n");
    printf("\t*LISTA DE ATIVIDADES 08*\n");
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
    case 12:
        exercicio12();
        break;
    case 13:
        exercicio13();
        break;
    case 14:
        exercicio14();
        break;
    case 15:
        exercicio15();
        break;
    case 16:
        exercicio16();
        break;
    case 17:
        exercicio17();
        break;
    case 19:
        exercicio19();
        break;
    case 21:
        exercicio21();
        break;
        case 23:
        exercicio23();
        break;
        case 24:
        exercicio24();
        break;
        case 25:
        exercicio25();
        break;
        case 26:
        exercicio26();
        break;
        case 27:
        exercicio27();
        break;
        
    default:
        printf("----------------------------------------\n");
        printf("ALTERNATIVA NAO VALIDA!!!\n");
        printf("----------------------------------------\n");
        break;
    }
    return 0;
}