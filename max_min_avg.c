#include <stdio.h>
#include <float.h>


int main() 
{ 

  float max = -FLT_MAX;
  float min = FLT_MAX;
  float sum = 0.0f;
  float input;
  int n = 0;

  while (scanf("%f", &input) == 1)
  {
    // ignore negatvie values(0 보다 작을 경우 && 100보다 클 경우)
    if (input < 0.0f || input > 100.0f)
      continue;
    
    // min calc
    min = (input < min) ? input : min;

    // max calc
    max = (input > max) ? input : max;
    // ave calc
    sum += input;
    n++;
  }

  if (n > 0)
    printf("min = %f, max = %f, ave = %f\n", min, max, sum / n);
  else // n <= 0
    printf("no input");

  return 0; 
}