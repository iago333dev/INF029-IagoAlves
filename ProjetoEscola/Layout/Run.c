#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../Functions/student.c"
#include "../Functions/teacher.c"
#include "../Functions/subjects.c"

#include "../Head/Run.h"

int showMenu(){  
	int init = 0;
	int resp = 0;

   do{
	   printf("******************************** \n");
     printf("Digite 1 Para Menu Aluno \n");
     printf("Digite 2 Para Menu Professor \n");
     printf("Digite 3 Para Menu Matéria \n");
	   printf("******************************** \n");

		scanf("%d",&resp);

		switch (resp){
      case 1:{
		  resp = showStudentMenu();
			break;
			}

      case 2:{
			resp = showTeacherMenu();  
			break;
			}

      case 3:{
			resp = showSubjectsMenu();  
			break;
			}
			
			default:{
				printf("==================== \n");
				printf("Resposta Invalida \n");
				printf("==================== \n");
			}
			
			resp = 0;
			}
   	}while(resp == 0);
}

int submenuStudantUpdate(){
	    int option;

    while(option != 0){
      printf("Digite 1 para atualizar Nome \n");
      printf("Digite 2 para atualizar Sexo \n");
		  printf("Digite 0 para Menu \n");
      
      scanf("%d",&option);

  		if(option == 0)  {
        showMenu();
      }
        updateStudent(option);
    }
	return 0;
}

int submenuTeacherUpdate(){
	  int option;

    while(option != 0){
      printf("Digite 1 para atualizar Nome \n");
      printf("Digite 2 para atualizar Sexo \n");
		  printf("Digite 0 para Menu \n");

      scanf("%d",&option);

		if(option == 0)  {
        	showMenu();
    	}

        updateTeacher(option);
    }

	return 0;

}

int showStudentMenu(){    	      
  int resp = 999;
  
  do{
    printf("******************************** \n");
    printf("Digite 1 Inserir Aluno \n");
  	printf("Digite 2 Listar Alunos \n");
  	printf("Digite 3 Atualizar Aluno \n");
  	printf("Digite 4 Deletar Aluno \n");	    
    printf("Digite 0 Para Voltar \n");
    printf("******************************** \n");

		scanf("%d",&resp);

    switch (resp){
      case 1:{
      resp = createStudent();		
			break;
			}

      case 2:{
		  resp = readStudents();
			break;
			}

      case 3:{
		  submenuStudantUpdate();
			break;
			}
		  case 4:{
		  resp = deleteStudent();
			break;
			}

      case 0:{
		  resp = showMenu();
			break;
			}
      
			default:{
				printf("==================== \n");
				printf("Resposta Invalida \n");
				printf("==================== \n");
			}
			
			resp = 999;
		}
  }while(resp = 999);  
}

int showTeacherMenu(){  
  int resp = 999;
  do{
    printf("******************************** \n");
		printf("Digite 1 Inserir Professor \n");
		printf("Digite 2 Listar Professor \n");
		printf("Digite 3 Atualizar Professor \n");
		printf("Digite 4 Deletar Professor \n");	
    printf("Digite 0 Para Voltar \n");
    printf("******************************** \n");

		scanf("%d",&resp);

    switch (resp){
      case 1:{
      resp = createTeacher();		
			break;
			}

      case 2:{
		  resp = readTeacher();
			break;
			}

      case 3:{
		  submenuTeacherUpdate(); 
			break;
			}
		  case 4:{
		  resp = deleteTeacher();
			break;
			}

      case 0:{
		  resp = showMenu();
			break;
			}
      
			default:{
				printf("==================== \n");
				printf("Resposta Invalida \n");
				printf("==================== \n");
			}
			
			resp = 999;
		}
  }while(resp = 999);  
}

int showSubjectsMenu(){    
  int resp = 999;
  do{
    printf("******************************** \n");
		printf("Digite 1 Inserir Matéria \n");
		printf("Digite 2 Listar Matérias e Respectivos Professores \n");	
    printf("Digite 3 Inserir Aluno na Disciplina \n");
    printf("Digite 4 Apresentar Alunos em Determinada Disciplina \n");
    printf("Digite 0 Para Voltar \n");
    printf("******************************** \n");
    
		scanf("%d",&resp);

    switch (resp){
      case 1:{
      resp = createSubject();	
			break;
			}

      case 2:{
		  resp = readSubjects();
			break;
			}

      case 3:{
		  resp = StudentHasSubject();
			break;
			}

      case 4:{
		  resp = readStudentOnSubject();
			break;
			}

      case 0:{
		  resp = showMenu();
			break;
			}
  
			default:{
				printf("==================== \n");
				printf("Resposta Invalida \n");
				printf("==================== \n");
			}
			
			resp = 999;
		}
  }while(resp = 999);
}

