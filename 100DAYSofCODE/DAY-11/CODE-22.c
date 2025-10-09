#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profit, loss;
    float profitPercentage, lossPercentage;

    printf("Enter the cost price: ");
    scanf("%f", &costPrice);

    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        profitPercentage = (profit / costPrice) * 100;
        printf("Profit Percentage: %.2f%%\n", profitPercentage);
    } else if (costPrice > sellingPrice) {
        loss = costPrice - sellingPrice;
        lossPercentage = (loss / costPrice) * 100;
        printf("Loss Percentage: %.2f%%\n", lossPercentage);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}

