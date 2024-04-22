#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1 = 0, n2 = 0, p = 0;
    printf("Digite um número: ");
    scanf("%i", &n1);
    printf("Digite outro número: ");
    scanf("%i", &n2);
    getchar();
    if(n1 > n2){
        p = n1 % 2;
        if(p == 0){
            printf("O primeiro número digitado é o maior e é par");
        }
        else{
            printf("O primeiro número digitado é o maior e é ímpar");
        }
    }
    else{
        p = n2 % 2;
        if(p == 0){
            printf("O segundo número digitado é o maior e é par");
        }
        else {
            printf("O segundo número digitado é o maior e é ímpar");
        }
    }
    getchar();
}
