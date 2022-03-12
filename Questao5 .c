#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

void valor (int a ){
     if (a >= 0){
         printf("o valor é positivo");
     } 
      else {
           printf("o valor é negativo");
     } 
 }
 
 int main( ) {
    setlocale(LC_ALL,"Portuguese_Brazil");
     int num; 
     
     printf("Digite  o valor de N: ");
     scanf("%d", &num);
     
     valor(num); 
     
     return 0;
} 