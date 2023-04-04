#include <stdio.h>

int main() {
   int number, sum = 0, digit;

   printf("Enter a number: ");
   scanf("%d", &number);

   for ( ; number != 0; number /= 10) {
      digit = number % 10;
      sum += digit;
   }

   printf("Sum of digits: %d\n", sum);

   return 0;
}
