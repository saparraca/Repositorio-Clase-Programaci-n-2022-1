//Tarea 1, suma de inversos de numeros pares entre 10 y 100

#include <iostream>
#include <cmath>

int main(void)
{
  std::cout << "Tarea 1: Suma de inversos multiplicativos entre 10 y 100\n" ;
  double result = 0 ;
  int a ;
  for (a = 10; a <=100; a = a+1) {
    if (a%2 == 0 ) {
    result = result + 1.0/a ;
    }
  }
  std::cout <<"El resultado es: " << result << "\n" ;
  return 0;

}
