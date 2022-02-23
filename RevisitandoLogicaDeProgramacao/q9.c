#include <stdlib.h>
#include <stdio.h>

typedef struct{
  int valor;
  int primo;
}st_numero;

/* 
-> Compilar:  gcc q9.c -o ./Compilado/q9
-> Executar:  ./Compilado/q9
*/

int verificaPrimo(st_numero numero){
if(
  numero.valor > 1 && 
  numero.valor % 2 != 0 && 
  numero.valor % 3 != 0 && 
  numero.valor % 5 != 0 && 
  numero.valor % 7 != 0 
){
    return 1;
  }else if(numero.valor == 2 || numero.valor == 3 || numero.valor == 5 || numero.valor == 7){
    return 1;
  }else{
    return 0;
  }  
}

int main(){
  st_numero numeros[10];
  int i = 0;

  //Recebe Valores do Usuario
 for(i = 0;i<=9;i++){
    printf("Digite o %dº Numero \n",i+1);
    scanf("%d",&numeros[i].valor);    
  }

  //Função Para Validar Numeros Primos
  for(i = 0;i<=9;i++){
    numeros[i].primo = verificaPrimo(numeros[i]);   
  }
  //Apresetando Numeros Primos
  printf("Apresentando Somente Numeros Primos: \n");
  for(i = 0;i<=9;i++){
    if(numeros[i].primo == 1){
      printf("Numero: %d \n",numeros[i].valor);       
    }  
  }
}