#include <stdio.h>

int main() {
  int x = 10;
  int *ptr = &x; // Correct pointer initialization
  *ptr = 20;     // Modifying the value pointed to
  printf("%d\n", x); // Output: 20
  return 0;
} 
