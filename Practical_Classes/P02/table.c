//
// Tomás Oliveira e Silva, AED, October 2021
//
// program to print a table of the squares and square roots of some integers
//
// on GNU/Linux, run the command
//   man 3 printf
// to see the manual page of the printf function
//

#include <math.h>
#include <stdio.h>

void do_it(int N)
{
  int i;

  printf(" n n*n      sqrt(n)\n");
  printf("-- --- -----------------\n");
  for(i = 1;i <= N;i++)
    printf("%2d %3d %17.15f\n",i,i * i,sqrt((double)i));
}

void ang(int N){
  int i;

  printf(" n     sin(n)     cos(n)  \n");
  printf("--     ------     ------\n");

  for ( i = 1; i <= N; i++)
  {
    printf("%2d %10.4f %10.4f\n", i, sin((double)i), cos((double)i));
  }
}



int main(void)
{
  do_it(10);
  ang(90);
  return 0;
}
