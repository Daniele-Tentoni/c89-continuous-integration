/*
 * Program made by Daniele Tentoni following ansi c89 standard.
 *
 * Copyright 2021 Daniele Tentoni
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
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