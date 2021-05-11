/*
 * Program made by Daniele Tentoni following ansi c89 standard.
 */
#include <stdio.h>
#include "math2.h"

/*
 * Don't modify line below.
 */
int main(int argc, char *argv[])
{
  /*
   * Put your vars here.
   */
  int first = 0;
  int second = 0;
  int result = 0;

  /*
   * Don't modify argument count check unless it's specified in the exercise.
   */
  if (argc != 2)
  {
    printf("Program called with a wrong number of parameters\n");
    return 1;
  }

  /*
   * This is an optional line. It's kawaiiiiiii.
   */
  printf("Hello world from %s program.\n", argv[1]);

  /*
   * Use sscanf to convert a char array to integer.
   * https://stackoverflow.com/a/10204663
   */
  sscanf(argv[1], "%d", &first);
  sscanf(argv[2], "%d", &second);
  result = add(first, second);
  printf("Produced: %d\n", result);

  return 0;
}