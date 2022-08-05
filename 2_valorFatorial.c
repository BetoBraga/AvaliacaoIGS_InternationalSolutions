#include <stdio.h>

// neste código retirei os ponteiros, pois obtive dificuldade em manipulá-los
int calc_fatorial(int valor_ft, int valor_n){

// for para a fórmula de fatoração
for(valor_ft = 1; valor_n > 1; valor_n = valor_n - 1)
  {
      valor_ft = valor_ft * valor_n;
  }

    return valor_ft;

}
int main() {
 int v = 0;
 scanf("%d", &v);
 int vf = calc_fatorial(vf, v);
 printf("Valor fatorial de: [%d] é [%d]", v, vf);
 return 0;
}
