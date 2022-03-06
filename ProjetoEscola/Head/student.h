#define maxStudent 6
//struct Student createStudent();
int readStudents();
int createStudent();
int readStudents();
int updateStudent(int option);
int deleteStudent();

struct Student{
    int Matricula;
    char Nome[60];
    char Sexo[2];
	char dataNascimento[11];
    char Cpf[15];
};

struct Student allStudents[maxStudent];