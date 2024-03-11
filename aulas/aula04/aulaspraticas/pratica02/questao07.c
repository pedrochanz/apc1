#include <stdio.h>

int main(){
  printf("------------------\n");
  float valor_hora_trabalho = 150.0f;
  int total_horas_trabalhadas = 200;
  const float IR = 0.25;
  const float INSS = 0.11;
  float salario_bruto = valor_hora_trabalho * total_horas_trabalhadas;
  float valor_ir = salario_bruto * IR;
  float valor_inss = salario_bruto * INSS;
  float salario_liquido = salario_bruto - valor_ir - valor_inss;
  printf("\x1b[40m------------------");
  printf("C O N T R A C H E Q U E\n");
  printf("------------------\x1b[40m\n");
    printf("Salario Bruto...: R$ \x1b[32m%8.2f\x1b[32m\n", salario_bruto);
  printf("Valor IR:.......: R$ \x1b[32m%8.2f\x1b[32m\n", valor_ir);
  printf("Valor INSS:.....: R$ \x1b[32m%8.2f\x1b[32m\n", valor_inss);
  printf("Salario Liquido.: R$ \x1b[32m%8.2f\x1b[32m\n", salario_liquido);
  
  return 0;
}