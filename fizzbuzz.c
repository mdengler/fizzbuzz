#include <stdio.h>

int main(int argc, char ** argv) {
  int i = 1;
  for (int i=1; i <= 100; i++) {
    if (i % 3 == 0)
      printf("Fizz");
    if (i % 5 == 0)
      printf("Buzz");
    if (! ((i % 5 == 0) || (i % 3 == 0)))
      printf("%d", i);
    printf("\n");
  }
}
