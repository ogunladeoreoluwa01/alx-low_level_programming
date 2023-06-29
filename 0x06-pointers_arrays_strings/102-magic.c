#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * Write your line of code here...
   *
   * Description: In this section, you are required to write a single line of code
   *              to accomplish a specific task. There are some limitations and
   *              restrictions to keep in mind:
   *              - You are not allowed to use variable 'a'.
   *              - You are not allowed to modify variable 'p'.
   *              - Only one statement is permitted.
   *              - The code you write should be limited to this line only and
   *                should not include any additional code or statements.
   *
   * Task: Write the necessary code to complete the specified task within these
   *       constraints.
   */
  p[5] = 98;
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
}
