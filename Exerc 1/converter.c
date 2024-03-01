#include <stdio.h>

double converter(double fahr){
  //C = 5/9 ∗ (F − 32)
  double a = 5.0/9.0;
  double f = fahr - 32;
  double c = a * f;

  return c;
}


int main(int argc, char const *argv[])
{
  double c;
  float f;
  printf("Digite a temperatura em °F: \n");
  scanf("%f", &f);
  c = converter(f);
  printf("%f", c);

  return 0;
}
