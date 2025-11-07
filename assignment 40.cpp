#include <stdio.h>

int main() {
    double weight;
    double total_charge = 0.0;

    printf("Welcome to Masur Transport Company\n");
    printf("Please enter the weight of the parcel in kg: ");
    scanf("%lf", &weight);

    if (weight <= 0) {
        printf("Invalid weight! Weight must be a positive number.\n");
        return 1;
    }

    if (weight <= 10) {
        total_charge = weight * 30;
    } else if (weight <= 30) {
        double charge_for_first_10kg = 10 * 30;
        double remaining_weight = weight - 10;
        double charge_for_next_part = remaining_weight * 20;
        total_charge = charge_for_first_10kg + charge_for_next_part;
    } else {
        double fixed_charge_for_30kg = (10 * 30) + (20 * 20);
        double remaining_weight = weight - 30;
        double charge_for_final_part = remaining_weight * 15;
        total_charge = fixed_charge_for_30kg + charge_for_final_part;
    }

    printf("\n--- Shipping Details ---\n");
    printf("Parcel weight: %.2f kg\n", weight);
    printf("Total charge: R$ %.2f\n", total_charge);

    return 0;
}

