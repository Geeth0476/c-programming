#include <stdio.h>

int main() {
   int amount, notes;

   printf("Enter an amount: ");
   scanf("%d", &amount);

   printf("Denominations of notes:\n");
   notes = amount / 500;
   amount = amount % 500;
   printf("Rs. 500: %d\n", notes);

   notes = amount / 100;
   amount = amount % 100;
   printf("Rs. 100: %d\n", notes);

   notes = amount / 50;
   amount = amount % 50;
   printf("Rs. 50: %d\n", notes);

   notes = amount / 20;
   amount = amount % 20;
   printf("Rs. 20: %d\n", notes);

   notes = amount / 10;
   amount = amount % 10;
   printf("Rs. 10: %d\n", notes);

   notes = amount / 5;
   amount = amount % 5;
   printf("Rs. 5: %d\n", notes);

   notes = amount / 2;
   amount = amount % 2;
   printf("Rs. 2: %d\n", notes);

   notes = amount / 1;
   printf("Rs. 1: %d\n", notes);

   return 0;
}
