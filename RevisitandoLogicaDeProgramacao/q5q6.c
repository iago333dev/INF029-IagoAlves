#include <stdlib.h> 
#include <stdio.h>

/* 
-> Compilar:  gcc q5q6.c -o ./Compilado/q5q6
-> Executar:  ./Compilado/q5q6
*/
typedef struct{
    int Idade;     
} Pessoa; 

int verificaIdade(int Idade){ 
  if(Idade >= 18){
    printf("Maior de Idade \n");
  }else if(Idade >= 0){
    printf("Menor de Idade\n");
  }else{
    return 1;
  }  
}

int main (){
  int chave = 0;
  Pessoa Alguem;
  do{
    printf("Digite a Idade \n");
    scanf("%d",&Alguem.Idade);
    chave = verificaIdade(Alguem.Idade);
  }
  while(chave!=1);
}