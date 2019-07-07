#include <stdio.h>
#define N 1000

void main() {
 float i, a, b, sum = 0;
 printf("This program will integrate a function between two boundary limits.\n");
 //Here its limit of the program
 printf("Enter the first boundary limit:\n");
 scanf("%f", &a);
 printf("Enter the second boundary limit:\n");
 scanf("%f", &b);
 if (a > b) {
  i = a;
  a = b;
  b = i;
 }
int x,y;

 for (i = a; i < b; i += (b - a) / N)
{
  //Here Y is equation whose integration we want to find.
  y = x * x + 2 * x - 4;
  //Here its basic integration style.
  sum += y * (b - a) / N;
}

 printf("Value of integration is:%.3f", sum);
 getch();
 return;
}
