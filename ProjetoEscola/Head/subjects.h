#include "./globalconst.h"

struct Subject{
  int Codigo;
  char MateriaNome[MaxSubName];
  char Semestre[MaxHalfyear];
  int MatriculaProf;
};

struct Subject allSubject[MaxSubject];