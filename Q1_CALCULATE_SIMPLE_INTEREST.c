#include <stdio.h>

int main() {

    printf("How much amount do you want for 12 month\n");
    printf("We are going to apply 10%% simple interest\n");

    int n = 12000;
    int totalAmount = 0;

    for (int i = 0; i < 12; i++) {

        n = n + n / 10;
        totalAmount += n;
        n = n - n / 10;
    }

    printf("Your total amount with simple interest = %d\n", totalAmount);

    return 0;
}