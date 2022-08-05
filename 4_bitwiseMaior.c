#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int calcular_maximum_bitwise(int a, int b) {

int maior_valor;

printf("a = %d, b = %d\n", a, b);

    printf("A & B = %d\n", a & b);
    printf("A | B = %d\n", a | b);
    printf("A ^ B = %d\n", a ^ b);    
    printf("~A = %d\n", a = ~a);
    printf("~B = %d\n", b = ~b);
    printf("B << 1 = %d\n", b << 1);
    printf("B >> 1 = %d\n", b >> 1);

    if (a > b)
    maior_valor = a;
    else
    maior_valor = b;

return maior_valor;

}
int main() {
 int valor_1, valor_2, maior_valor;
 printf("Informe os valores.\n");
 scanf("%d %d", &valor_1, &valor_2);
 maior_valor = calcular_maximum_bitwise(valor_1, valor_2);

 printf("O maior valor é: %d .\n", maior_valor);

 return 0;
}
