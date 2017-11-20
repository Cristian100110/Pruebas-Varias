#include<stdio.h>

int main()
{
  int num1,num2,resultado;

  printf("Dime un número\n");
  scanf("%d",&num1);
  printf("Dime otro número\n");
  scanf("%d",&num2);
  resultado = num1 + num2;
  printf("el resultado de la suma es:%d\n",resultado);
return 0;
}
