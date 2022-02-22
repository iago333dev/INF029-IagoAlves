#include <stdlib.h> 
#include <stdio.h>

/* 
-> Compilar:  gcc q7.c -o ./Compilado/q7
-> Executar:  ./Compilado/q7
*/

int verificaNumero(int numero){
if(
  numero > 1 && 
  numero % 2 != 0 && 
  numero % 3 != 0 && 
  numero % 5 != 0 && 
  numero % 7 != 0 
){
    printf("%d É um numero primo",numero);
  }else if(numero == 2 || numero == 3){
    printf("%d É um numero primo",numero);
  } else{
   printf("%d NÃO um numero primo",numero);
  }
}

int main (){
  int numero;  
  printf("Digite um Numero \n");
  scanf("%d",&numero);
  verificaNumero(numero); 
  
}