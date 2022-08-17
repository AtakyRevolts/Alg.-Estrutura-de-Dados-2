#include <stdio.h>
#include <math.h>

float raiz(float n, float c, float e);

int main() {
  float r = raiz(13,3.5,0.001);
  printf("\nResultado: %.2f\n",r);
  return 0;
}

float raiz(float n, float c, float e){
  /*
  if(pow(c,2)-n <= e){
    return c;
  } else {
    return raiz(n,(pow(c,2)+n)/(2*c),e);
  }
  return 0;
  */
  printf("Calculando raiz(%.2f, %f, %.2f)\n",n,c,e);
  return pow(c,2)-n <= e ? c : raiz(n,(pow(c,2)+n)/(2*c),e);
}

// Fortis Anima //
