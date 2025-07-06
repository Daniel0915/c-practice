#include <stdio.h>

// 6. 11 콤마 연산자
int main() 
{

   /*
		Simulation of a Moving Object

		- Speed = 1.0 m/s
		- dt = 1.0 s
		- Distance traveled during dt = Speed * dt
		
		- Step 1 : 1.0 m/s * 1.0 s = 1.0 m, dist = 1.0 m
		- Step 2 : 1.0 m/s * 1.0 s = 1.0 m, dist = 1.0 m + 1.0 m = 2.0 m
		- Step 3 : 1.0 m/s * 1.0 s = 1.0 m, dist = 2.0 m + 1.0 m = 3.0 m
		- ... ...
	*/

	/*
		Zeno's Paradox

		- Step 1 : 1.0 * 1.0 = 1.0, 1.0
		- Step 2 : 1.0 * 0.5 = 0.5, 1.0 + 0.5 = 1.5
		- Step 3 : 1.0 * 0.25 = 0.25, 1.5 + 0.25 = 1.75	
		... ... 
	*/

   const unsigned repeat_max = 100;
   float speed = 1.0f, dt = 1.0f;

   float result = 0.0f;
   for (int index = 0; index < repeat_max; index++) {
      result += speed * dt;

      // dt /= 2.0;
      // 곱하기가 나누기보다 빠름
      dt *= 0.5;

      printf("%f\n", result);
   }

   return 0;
}