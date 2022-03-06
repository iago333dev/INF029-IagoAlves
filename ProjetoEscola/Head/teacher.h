#include "./globalconst.h"

int readTeacher();
int createTeacher();
int updateTeacher(int option);
int deleteTeacher();

struct Teacher{
    int Matricula;
    char Nome[MaxName];
    char Sexo[MaxGen];
	char dataNascimento[MaxBirth];
    char Cpf[MaxCPF];
};

struct Teacher allTeachers[maxTeacher];