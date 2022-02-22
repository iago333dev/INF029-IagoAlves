#include <stdlib.h> 
#include <stdio.h>

/* 
-> Compilar:  gcc q3q4.c -o ./Compilado/q3q4
-> Executar:  ./Compilado/q3q4
*/
typedef struct{
    int Valor1; 
    int Valor2;      
} Valor; 

int main (){
  Valor V;  
  printf("Digite o 1º Valor \n");
  scanf("%d",&V.Valor1); 
  printf("Digite o 2º Valor \n");
  scanf("%d",&V.Valor2); 

  V.Valor1 = V.Valor2+V.Valor1; 
  V.Valor2 = V.Valor1-V.Valor2; 
  V.Valor1 = V.Valor1-V.Valor2;
  
  printf("1º Valor: %d \n",V.Valor1);
  printf("2º Valor: %d \n",V.Valor2);
  
}