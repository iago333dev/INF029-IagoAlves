#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../Head/subjects.h"


int indexSubjects = 1;

int Codigo;
char MateriaNome[30];
char Semestre[6];
int MatriculaProf;


int createSubject(){

    fflush(stdin);    
    
    printf("Digite o Nome da Matéria \n");   
    getchar();     
    fgets(MateriaNome, 30, stdin);
    fflush(stdin); 
   

    printf("Digite o Semestre da Materia \n");   
    fgets(Semestre, 8, stdin);    
    getchar();       
    fflush(stdin); 
     
    printf("Digite o Codigo Matricula do Professor \n"); 
    scanf("%d",&MatriculaProf);

     
    allSubject[indexSubjects].Codigo = indexSubjects;
    strcpy(allSubject[indexSubjects].MateriaNome,MateriaNome);
    strcpy(allSubject[indexSubjects].Semestre,Semestre);
    allSubject[indexSubjects].MatriculaProf = MatriculaProf; 

    indexSubjects++;

    
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