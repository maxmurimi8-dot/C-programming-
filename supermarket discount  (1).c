#include <stdio.h>

// Function prototype
float calculate_discount(float purchase_amnt);

int main() {
    float amount, result, final_amount;

    printf("Enter the amount purchased:\t");
    scanf("%f", &amount);

    // Function call
    result = calculate_discount(amount);
    final_amount = amount - result;

    printf("\n");
    printf("NAIVAS DISCOUNT PROGRAM\n");
    printf("=======================\n");
    printf("Initial Amount: Ksh. %.2f\n", amount);
    printf("Discount offered: Ksh. %.2f\n", result);
    printf("Final amount payable: Ksh. %.2f\n", final_amount);
    printf("=======================\n");

    return 0;
}

// Function definition
float calculate_discount(float purchase_amnt) {
    float discount;

    if (purchase_amnt < 5000) {
        discount = 0.05 * purchase_amnt;
    }
    else if (purchase_amnt >= 5000 && purchase_amnt <= 9999) {
        discount = 0.10 * purchase_amnt;
    }
    else if (purchase_amnt >= 10000) {
        discount = 0.15 * purchase_amnt;
    }

    return discount;
}