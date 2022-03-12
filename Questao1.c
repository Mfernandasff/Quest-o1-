#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma ( int valor){
   int soma = 0;
   
    for (int n = valor; n >= 1; n--){ 
       soma  = soma  + n;
     } 
       return soma; 
       
 }

int main ( ){ 
   setlocale(LC_ALL, "Portuguese_Brazil");
   
   int m, resposta;
   
   printf ("digite o valor de n; ");
   scanf("%d", &m); 
   
   resposta = soma (m);
   
   printf("o resultado da soma dos numeros é: %d", resposta);
   
   return 0;

}