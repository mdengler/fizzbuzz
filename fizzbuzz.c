#include <stdio.h>

int main(int argc, char ** argv) {
  int i = 1;
  for (i=1; i <= 100; i++) {
    printf("%i", i);  /* Yes, I read the problem statement, but the
                       * output is cleaner this way, so stop slavishly
                       * doing meaningless programming tasks because
                       * some guy says most people in your industry
                       * can't do them ;).
                       */
    if (i % 3 == 0)
      printf(" Fizz");
    if (i % 5 == 0) {
      if (i % 3 != 0)
        printf(" ");
      printf("Buzz");
    }
    printf("\n");
  }

}
