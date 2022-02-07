/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1, mark2, total;
  float avg;

  printf("Enter the mark1 :");
  scanf("%d",&mark1);
  printf("Enter the mark2 :");
  scanf("%d",&mark2);

  total = mark1 + mark2;
  avg = total/2.0;

  printf("total is %d\n", total);
  printf("total is %f\n", avg);




  
  return 0;
}

