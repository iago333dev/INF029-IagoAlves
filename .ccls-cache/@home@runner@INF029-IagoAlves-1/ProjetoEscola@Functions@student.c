#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../Head/student.h"
#include "../Head/Run.h"
//#include "../Layout/Screen.c"

int ExitFunction();

int indexStudent = 1;

int Matricula;
int response = 0;
char Nome[MaxName];
char Sexo[MaxGen];
char dataNascimento[MaxBirth];
char Cpf[MaxCPF]; 

int createStudent(){

    fflush(stdin);    
    
    printf("Digite o Nome \n");   
    getchar();     
    fgets(Nome, 60, stdin);
    fflush(stdin); 
   

    printf("Digite Sexo: M ou F \n");   
    fgets(Sexo, 2, stdin);    
    getchar();       
    fflush(stdin); 
     
    printf("Digite a Data de Nascimento \n"); 
    //getchar();
    fgets(dataNascimento, 11, stdin);
    fflush(stdin); 

    printf("Digite o CPF \n");   
    //getchar();
    fgets(Cpf, 15, stdin);

    allStudents[indexStudent].Matricula = indexStudent;
    strcpy(allStudents[indexStudent].Nome,Nome);
    strcpy(allStudents[indexStudent].Sexo,Sexo);
    strcpy(allStudents[indexStudent].dataNascimento,dataNascimento);
    strcpy(allStudents[indexStudent].Cpf,Cpf);   

    indexStudent++;
    printf("**************************** \n");  
    printf("Aluno Criado com Sucesso! \n");
    printf("**************************** \n");
    ExitFunction();   

    return 0;
}

int readStudents(){

    int count = 1;

    printf("**************************** \n");
    while(count != indexStudent){
        printf("Matricula %d \n",allStudents[count].Matricula);
        printf("Nome: %s",allStudents[count].Nome);    
        printf("Genero: %s \n",allStudents[count].Sexo);
        printf("Data de Nascimento: %s",allStudents[count].dataNascimento);
        printf("CPF: %s",allStudents[count].Cpf);
        count++;
        printf("**************************** \n");      
   }
    ExitFunction();   
    return 0;
}; 

int updateStudent(int option){    
    char novo_nome[60];
    char novo_sexo[5];
    int user_id = 0;

    fflush(stdin);  
  

    printf("Digite o Numero Matricula do Aluno Para Alteração \n");
    scanf("%d",&user_id);
    fflush(stdin);  


    switch (option)
    {
        case 1:{
            printf("Digite um novo NOME para %s\n",allStudents[user_id].Nome);   
            getchar();     
            fgets(novo_nome, 60, stdin);           
            strcpy(allStudents[user_id].Nome,novo_nome);

            printf("******************************************** \n");
            printf("Nome Alterado com Sucesso! \n");
            printf("******************************************** \n");
            ExitFunction();
            return 0;
        
            break;
        }
            case 2:{
            printf("Digite um SEXO para %s",allStudents[user_id].Nome);   
            getchar();     
            scanf("%s",&novo_sexo);                                
            strcpy(allStudents[user_id].Sexo,novo_sexo);

              printf("******************************************** \n");
              printf("SEXO de %s Alterado com Sucesso! \n",allStudents[user_id].Nome);
              printf("******************************************** \n");
              ExitFunction();
              return 0;
        
            break;
        }
    }
      
    return 0;
    
    //showMenu();


    
}

int deleteStudent() {
    int delete_id = 3000;
    int next_id = 0;

    printf("**************************** \n");
    printf("Digite a Matricula do Aluno que Deseja DELETAR \n");
    scanf("%d",&delete_id); 

    if(!allStudents[delete_id].Matricula){
        printf("Aluno Não encontrado \n");
        printf("**************************** \n");

        return 0;
    }

    next_id = delete_id+1;
    
    while(next_id!=indexStudent){

        //Getting next element of global struct array

        strcpy(Nome,allStudents[next_id].Nome); 
        strcpy(Sexo,allStudents[next_id].Sexo);
        strcpy(dataNascimento,allStudents[next_id].dataNascimento);
        strcpy(Cpf,allStudents[next_id].Cpf);

        //Push next element in previous position

        strcpy(allStudents[delete_id].Nome,Nome);
        strcpy(allStudents[delete_id].Sexo,Sexo);
        strcpy(allStudents[delete_id].dataNascimento,dataNascimento);
        strcpy(allStudents[delete_id].Cpf,Cpf); 

        next_id++;
        delete_id++;
    }

    indexStudent--; //Remove last position

    printf("**************************** \n");
    printf("Aluno Excluido com Sucesso! \n");
    printf("**************************** \n");
    printf("Aluno: %s",allStudents[delete_id].Nome);
    printf("Data de Nascimento: %s",allStudents[delete_id].dataNascimento);
    printf("CPF: %s",allStudents[delete_id].Cpf);      
    printf("**************************** \n");  
    ExitFunction(); 
    return 0;    

}