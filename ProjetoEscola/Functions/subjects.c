#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../Head/subjects.h"
#include "../Layout/Screen.c"
      
int indexSubjects = 1;

int Codigo;
char MateriaNome[30];
char Semestre[6];
int MatriculaProf;

int checkTeacher(int teacherId){
  int resp = 999;
  if(allTeachers[teacherId].Matricula > 0 && allTeachers[teacherId].Matricula < maxTeacher){
    printf("Professor: %s Pressione 1 Para Confirmar \n",allTeachers[teacherId].Nome);
    
    scanf("%d",&resp);
    if(resp == 1){
      return 1;
    }
    return 0;
  }
  printf("Codigo do Professor Invalido \n");
  ExitFunction();
  return 0;
}


int createSubject(){
  int checkteacher = 999;

    fflush(stdin);    
    
    printf("Digite o Nome da Matéria \n");   
    getchar();     
    fgets(MateriaNome, 30, stdin);
    fflush(stdin); 
   

    printf("Digite o Semestre da Materia \n");   
    fgets(Semestre, 8, stdin);    
    //getchar();       
    fflush(stdin); 
     
    printf("Digite o Codigo Matricula do Professor \n"); 
    scanf("%d",&MatriculaProf);

    checkteacher = checkTeacher(MatriculaProf);

    if(checkteacher == 1){
      allSubject[indexSubjects].Codigo = indexSubjects;
      strcpy(allSubject[indexSubjects].MateriaNome,MateriaNome);
      strcpy(allSubject[indexSubjects].Semestre,Semestre);
      allSubject[indexSubjects].MatriculaProf = MatriculaProf; 
      
      indexSubjects++;      

      printf("Matéria Criada com Sucesso! \n");
      ExitFunction();    
    }    
    return 0;
}


int readSubjects(){
    
  int count = 1;

    printf("**************************** \n");
    while(count != indexSubjects){
        printf("Codigo Materia %d \n",allSubject[count].Codigo);
        printf("Nome da Materia: %s",allSubject[count].MateriaNome);    
        printf("Semestre da Materia: %s \n",allSubject[count].Semestre);
        printf("Nome Professor: %s \n",allTeachers[allSubject[count].MatriculaProf].Nome);
        count++;
        printf("**************************** \n");
   }
    showMenu();
};

