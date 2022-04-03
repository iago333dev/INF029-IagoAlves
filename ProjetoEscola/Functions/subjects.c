#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../Head/subjects.h"
#include "../Layout/Screen.c"
      
int indexSubjects = 1;
int indexStudentHasSubject = 1;

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

      printf("Matéria de Codigo %d Criada com Sucesso! \n",indexSubjects);
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

int StudentHasSubject(){
  int subject_code;
  int student_code;
  int response_a = 0;
  int response_b = 0;

  do{
    system("clear");
    printf("Digite o Codigo da Matéria \n");
    scanf("%d",&subject_code);

        if(!allSubject[subject_code].Codigo){
        printf("Matéria Não encontrada \n");
        printf("**************************** \n");

        continue;
    }

    
    printf("Nome da Materia: %s",allSubject[subject_code].MateriaNome);    
    printf("Semestre da Materia: %s \n",allSubject[subject_code].Semestre);
    printf("Nome Professor: %s \n",allTeachers[allSubject[subject_code].MatriculaProf].Nome);
    printf("Digite 1 para Confirma Informações ou 0 Para Voltar \n");
    scanf("%d",&response_a);
    
  }while(response_a != 1);

  do{
    printf("Digite a Matricula do Aluno \n");
    scanf("%d",&student_code);

    if(!allStudents[student_code].Matricula){
      printf("Aluno Não encontrado \n");
      printf("**************************** \n");
      continue;
    }
    
    printf("Nome: %s",allStudents[student_code].Nome);    
    printf("Genero: %s \n",allStudents[student_code].Sexo);
    printf("Data de Nascimento: %s",allStudents[student_code].dataNascimento);
    printf("CPF: %s",allStudents[student_code].Cpf);
    printf("Digite 1 para Confirmar Informações ou 0 Para Voltar \n");
    scanf("%d",&response_b);
    
  }while(response_b != 1);

  if(response_a == 1 && response_b == 1){
    allSubjectStudent[indexStudentHasSubject].CodigoSubject = subject_code;
    allSubjectStudent[indexStudentHasSubject].CodigoStudent = student_code;

    indexStudentHasSubject++;
  }

  
   
}

int readStudentOnSubject(){
  int subject_code;
  int i = 0;
  printf("Digite o Codigo da Matéria \n");
  scanf("%d",&subject_code);

  printf("Apresentando Alunos da Matéria: %s \n",allSubject[subject_code].MateriaNome);
  while(i!=maxStudent){
    if(allSubjectStudent[i].CodigoSubject == subject_code){
      printf("%s \n",allStudents[allSubjectStudent[i].CodigoStudent].Nome);
    }
    i++;
  }
  ExitFunction();
  return 0;  
}