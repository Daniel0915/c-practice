#include <stdio.h>
#include <float.h>

int main() 
{
    // round-off errors (ex1)
    float a = 1.0E20f + 1.0f;
    float b = a - 1.0E20f;

    printf("%f\n", b);
    /**
     * 예상 출력 : 1.00000
     * 실제 출력 : 0.0000000 
     * 메모리 범위가 너무 커서 1.0f 사라짐
     */

     // round-off errors (ex2)
     float a_ex2 = 0.0f;
     int index = 0;
     for (index = 0; index < 100; index++) {
        a_ex2 = a_ex2 + 0.01f;
     }

     printf("%f\n", a_ex2);

     /**
     * 예상 출력 : 1.00000
     * 실제 출력 : 0.999999
     * 0.01f 는 사실 오차범위가 존재함. 실제로는 0.00999999999999
     * 그래서 모두 더하면 오차 범위가 존재함
     * 컴퓨터는 이진수 fraction(분수)로 부동소수점을 구하기 때문에 분수로 딱 떨어지지 않으면
     * 오차 범위가 존재함
     *  * fraction(분수)로 딱 떨어지는 0.25f 는 실제로 0.25로 컴퓨터가 계산함
     */

     // overflow
     float max = 3.402823466e+38F;
     printf("%f\n", max);
     max = max * 100.0f;
     printf("%f\n", max); 
     /**
      * 실제 출력 : inf
      */

      // underflow
      float f = 1.401298464e-45F;
      printf("%e\n", f);
      f = f / 100.0f;
      printf("%e\n", f);
      
      /**
      * 실제 출력 : 0.000000e+00
      * 우리는 이거를 정밀도 잃었다는 'subnormal' 라고 읽음
      */

     return 0;
}