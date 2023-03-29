#include <stdio.h>
#include<stdlib.h>

//Write a program that reads marks of students, calculate the sum adn average using arrays

int main(void) 
{
float marks [10];
  float sum = 0, avg;
  int i;

  printf("Welcome Student, Please enter your marks:\n");

  for (i = 0; i < 10; i++)
    scanf("%f", &marks[i]);

  for (i = 0; i < 10; i++)
    sum = sum + marks[i];
  avg = sum/10;

  printf("Your total score = %f\n\n", sum);
  printf("Your average score is = %f\n", avg);
  
  
  
  return 0;
}