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
	   showStudentMenu();
	   showTeacherMenu();
     showSubjectsMenu();
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
			case 5:{
			resp = createTeacher();
			break;
			} 
			case 6:{
			resp = readTeacher();
			break;
			} 
			case 7:{
			submenuTeacherUpdate(); 
			break;
			}        
			case 8:{
			resp = deleteTeacher();
			break;
			}

      case 9:{
			resp = createSubject();
			break;
			}

      case 10:{
			resp = readSubjects();
			break;
			}

			default:{
				printf("==================== \n");
				printf("Resposta Invalida \n");
				printf("==================== \n");
			}
			
			resp = 0;
			}
   	}        
   while(resp == 0);
}

int submenuStudantUpdate(){
	    int user_id,option;

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
	    int user_id,option;

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
		printf("Digite 1 Inserir Aluno \n");
		printf("Digite 2 Listar Alunos \n");
		printf("Digite 3 Atualizar Aluno \n");
		printf("Digite 4 Deletar Aluno \n");		
}

int showTeacherMenu(){    	
		printf("Digite 5 Inserir Professor \n");
		printf("Digite 6 Listar Professor \n");
		printf("Digite 7 Atualizar Professor \n");
		printf("Digite 8 Deletar Professor \n");		
}

int showSubjectsMenu(){    	
		printf("Digite 9 Inserir Matéria \n");
		printf("Digite 10 Listar Matérias e Professores \n");	
}