#include "./globalconst.h"

int readStudents();
int createStudent();
int updateStudent(int option);
int deleteStudent();

struct Student{
    int Matricula;
    char Nome[MaxName];
    char Sexo[MaxGen];
	  char dataNascimento[MaxBirth];
    char Cpf[Max];
};

struct Student allStudents[maxStudent];