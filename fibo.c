#include <stdio.h>
#include <math.h>

#define NUM 65

int main()   /*unchi*/
{
  int  i;
  double a1[NUM];
  double a2[NUM];
  double a3[NUM];
  
  for (i=0; i<NUM; i++) {
    if (i==0) {
      a1[i] = 0;
      a2[i] = 1;
      a3[i] = 1;
    }else{
      a1[i] = a2[i-1];
      a2[i] = a3[i-1];
      a3[i] = a1[i] + a2[i];
    }
  }

  printf("a20 = %lf\n", a1[20]);
  printf("a30 = %lf\n", a1[30]);
  printf("a40 = %lf\n", a1[40]);
  printf("a50 = %lf\n", a1[50]);
  printf("a60 = %lf\n", a1[60]);

  return 0;
}
