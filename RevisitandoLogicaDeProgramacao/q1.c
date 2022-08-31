#include <stdlib.h> 
#include <stdio.h>
#include <string.h>

/* 
-> Compilar:  gcc q1.c -o ./Compilado/q1
-> Executar:  ./Compilado/q1
*/
typedef struct{
    int Matricula; 
    int Semestre;  
    char Nome[100];
} Aluno; 

Aluno SetAluno(int Matricula, int Semestre, char* Nome){
  Aluno A;
  A.Matricula = Matricula;
  A.Semestre = Semestre;
  strcpy(A.Nome, Nome);

  return A;
}

int main (){
  Aluno Iago;
  Iago = SetAluno(2019116014,2,"Iago Alves do Nascimento");
  printf("Matricula: %d \n",Iago.Matricula);
  printf("Semestre: %dº \n",Iago.Semestre);
  printf("Nome: %s \n",Iago.Nome);
}