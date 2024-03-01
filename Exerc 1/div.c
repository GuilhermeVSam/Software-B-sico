#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a;
  a = scanf("Digite um valor: ");
  if(a%10 != 0 && a%5 != 0 && a%2 != 0){
    printf("Não divisível por nenhum dos valores (10, 5 e 2)");
  } else{
    if(a%10 == 0){
      printf("Divisivel por 10 \n");
    }
    if(a%5 == 0){
      printf("Divisivel por 5 \n");
    }
    if(a%2 == 0){
      printf("Divisivel por 2 \n");
    }
  }

  return 0;
}
