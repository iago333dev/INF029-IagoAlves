#define maxTeacher 6

//struct Student createStudent();
int readTeacher();
int createTeacher();
int readTeacher();
int updateTeacher(int option);
int deleteTeacher();

struct Teacher{
    int Matricula;
    char Nome[60];
    char Sexo[2];
	char dataNascimento[11];
    char Cpf[15];
};

struct Teacher allTeachers[maxTeacher];