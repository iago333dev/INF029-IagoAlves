#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../Head/teacher.h"
#include "../Head/layout.h"

int indexTeacher = 1;


int Matricula;
char Nome[60];
char Sexo[5];
char dataNascimento[11];
char Cpf[14]; 

int createTeacher(){

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

    allTeachers[indexTeacher].Matricula = indexTeacher;
    strcpy(allTeachers[indexTeacher].Nome,Nome);
    strcpy(allTeachers[indexTeacher].Sexo,Sexo);
    strcpy(allTeachers[indexTeacher].dataNascimento,dataNascimento);
    strcpy(allTeachers[indexTeacher].Cpf,Cpf);   

    indexTeacher++;

    return 0;
}

int readTeacher(){

    int count = 1;

    printf("**************************** \n");
    while(count != indexTeacher){
        printf("Matricula %d \n",allTeachers[count].Matricula);
        printf("Nome: %s",allTeachers[count].Nome);    
        printf("Genero: %s \n",allTeachers[count].Sexo);
        printf("Data de Nascimento: %s",allTeachers[count].dataNascimento);
        printf("CPF: %s",allTeachers[count].Cpf);
        count++;
        printf("**************************** \n");
   }

   

    showMenu();
}; 

int updateTeacher(int option){    
    char novo_nome[60];
    char novo_sexo[5];
    int user_id = 0;

    fflush(stdin);  
  

    printf("Digite o Numero Matricula do PRofessor Para Alteração \n");
    scanf("%d",&user_id);
    fflush(stdin);  


    switch (option)
    {
        case 1:{
            printf("Digite um novo NOME para %s\n",allTeachers[user_id].Nome);   
            getchar();     
            fgets(novo_nome, 60, stdin);           
            strcpy(allTeachers[user_id].Nome,novo_nome);
        
            break;
        }
            case 2:{
            printf("Digite um SEXO para %s",allTeachers[user_id].Nome);   
            getchar();     
            scanf("%s",&novo_sexo);                                
            strcpy(allTeachers[user_id].Sexo,novo_sexo);
        
            break;
        }
    }
      
    return 0;
    
    //showMenu();


    
}

int deleteTeacher() {
    int delete_id = 3000;
    int next_id = 0;

    printf("**************************** \n");
    printf("Digite a Matricula do Professor que Deseja DELETAR \n");
    scanf("%d",&delete_id); 

    if(!allTeachers[delete_id].Matricula){
        printf("Professor Não encontrado \n");
        printf("**************************** \n");

        return 0;
    }

    next_id = delete_id+1;
    
    while(next_id!=indexTeacher){

        //Getting next element of global struct array

        strcpy(Nome,allTeachers[next_id].Nome); 
        strcpy(Sexo,allTeachers[next_id].Sexo);
        strcpy(dataNascimento,allTeachers[next_id].dataNascimento);
        strcpy(Cpf,allTeachers[next_id].Cpf);

        //Push next element in previous position

        strcpy(allTeachers[delete_id].Nome,Nome);
        strcpy(allTeachers[delete_id].Sexo,Sexo);
        strcpy(allTeachers[delete_id].dataNascimento,dataNascimento);
        strcpy(allTeachers[delete_id].Cpf,Cpf); 

        next_id++;
        delete_id++;
    }

    indexTeacher--; //Remove last position

    printf("**************************** \n");
    printf("Professor Excluido com Sucesso! \n");
    printf("**************************** \n");
    printf("Professor: %s",allTeachers[delete_id].Nome);
    printf("Data de Nascimento: %s",allTeachers[delete_id].dataNascimento);
    printf("CPF: %s",allTeachers[delete_id].Cpf);      
    printf("**************************** \n");

    return 0;    

}