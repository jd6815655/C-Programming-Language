#include <stdio.h>

int main() {
  double bill = 0.0;
  double tipPercent = 0.0;

  printf("Enter bill amount: ");
  // put inputs into the input (stdin) panel.
  scanf("%lf", &bill);

  printf("Enter tip percent (e.g., 18 for 18%): ");
  scanf("%lf", &tipPercent);

  double tip = bill * (tipPercent / 100.0);
  double total = bill + tip;

  printf("\nBill: $%.2f\n", bill);
  printf("Tip: $%.2f\n", tip);
  printf("Total: $%.2f\n", total);

  return 0;
}