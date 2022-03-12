#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>

int fatorial (int num) {
     int fat = 1;
     
     for(int n = num; n >= 1; n--) {
         fat = fat * n;
      }
         return fat; 
}

int main( ){
    setlocale(LC_ALL, "Portuguese_Brazil"); 
    int valor, resultado;
    
    printf("Digite o valor:  "); 
    scanf("%d", &valor); 
    
    resultado = fatorial(valor); 
    
    printf("O fatorial do valor digitado é:  %d",            resultado);
   
}