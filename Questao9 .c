#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>

int divisores ( int numero) {
    int divisores;
    int d;
     
    for( d = 1;  d <= numero; d++) {
         
         if (numero % d == 0) {
            divisores = divisores + d;
          }
      }
      
      return divisores;
 } 
 
 int main( ){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int a, resultado;
    
     printf("Digite um numero: ");
     scanf("%d", &a);
     
     resultado = divisores (a);
      
      printf("O resultado da soma dos divisores é  %d", resultado);
}