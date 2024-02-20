#include <stdio.h>
#include <string.h>

struct data {
int dia;
char mes[10];
int ano;
};

struct pessoa {
char nome[100];
char end[80];
char fone[20];
struct data nascimento;
};

int main(void) {
  struct pessoa p;
  strcpy(p.nome,"José da Silva");
  strcpy(p.end, "Rua A, 300");
  strcpy(p.fone, "3333-2222");
  p.nascimento.dia = 20;
  strcpy(p.nascimento.mes, "maio");
  p.nascimento.ano = 1985;
}