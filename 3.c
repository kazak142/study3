#include <stdio.h>

int main(void) {
  double x;

  printf("Введите дробное число: ");
  scanf("%lf", &x);

  printf("Вы ввели: %.2lf\n", x);
  return 0;
}
