#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int n, value, sum;

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
      scanf("%i", &n);
      int *arr = (int*)malloc(n * sizeof(int));
      for (int i = 0; i < n; i++ ){
          scanf("%i", &value);
          arr[i] = value;
          sum += arr[i];
      }
  
    printf("%i", sum);
    free(arr);
      
    return 0;
}
