#include <stdlib.h> 
#include <stdio.h>
#include <string.h>

/* 
-> Compilar:  gcc q2.c -o ./Compilado/q2
-> Executar:  ./Compilado/q2
*/
typedef struct{
    int Idade1; 
    int Idade2;      
} Pessoa; 

int GetTotal(int Idade1, int Idade2){
  int total;  
  
  total = Idade1 + Idade2;
  return total;
}

int main (){
  Pessoa P;
  
  printf("Digite a Idade da 1º Pessoa \n");
  scanf("%d",&P.Idade1);
  printf("Digite a Idade da 2º Pessoa \n");
  scanf("%d",&P.Idade2);

  printf("Soma das Idades: %d",GetTotal(P.Idade1,P.Idade2));
  
}