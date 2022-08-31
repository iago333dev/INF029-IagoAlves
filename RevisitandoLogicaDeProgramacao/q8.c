#include <stdio.h>
#include <stdlib.h>

int CalcularFatorial(int numero){
  int resultado = 0;
  
  for(resultado = 1; numero > 1; numero = numero - 1){
    resultado = resultado * numero;    
  }
  return resultado;
}

int main(){
  int numero;

  printf("Digite um numero \n");
  scanf("%d",&numero);
  printf("Numero Fatorial de %d = %d \n",numero,CalcularFatorial(numero));
   
}