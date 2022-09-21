#include "./globalconst.h"

// Esturutra Matéria
struct Subject{
  int Codigo;
  char MateriaNome[MaxSubName];
  char Semestre[MaxHalfyear];
  int MatriculaProf;
};

//Vetor da Estrutura Matéria
struct Subject allSubject[MaxSubject];

//Estrutura que Associa Aluno com Matéria
struct SubjectStudent{
  int CodigoSubject;
  int CodigoStudent;
};

//Vetor da Estrutura que Associa Aluno com Matéria
struct SubjectStudent allSubjectStudent[maxStudent];



