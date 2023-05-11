#include <stdio.h>

int main (){
 float curVal, oldVal, percentile;
  printf("What is the CURRENT value of your asset?\n");
  scanf("%f", &curVal);
  printf("What is the OLD value of your asset?\n");
  scanf("%f", &oldVal);
  percentile = (curVal-oldVal)/oldVal;
  printf("%f", &percentile);
  return 0;
}
