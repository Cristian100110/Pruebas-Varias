#include <stdio.h>
 
  int main(){

    int edad;
    printf("ingresa tu edad\n");
    scanf("%i",&edad);
    if(edad >=18) /* esto es una pregunta*/

    {
     printf("Eres mayor de edad\n"); /* si es verdadero*/
    }

    else if(edad == 17)
    printf("Casi eres mayor de edad\n"); /*si es 17*/
    else{
    printf("Eres menor de edad\n"); /*si es falso*/
    }

return 0;

}
