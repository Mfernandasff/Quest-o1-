#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int potencia (int base, int exp){
     int pote = 1, i;
     for (i = 1; i <= exp; i++){
         pote = pote * base; 
     } 
      return pote;
}

 int main( ){
   setlocale (LC_ALL, "Portuguese_Brazil");
   int a, b, resultado;
   
   printf("Digite o valor da base:");
   scanf("%d", &a);
   
   printf("\n Digite o valor do expoente: \n");
   scanf("%d", &b); 
   
   resultado = potencia (a,b);
   
   printf ("O resultado da potencia é: %d", resultado);
  } 