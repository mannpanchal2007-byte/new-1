#include <stdio.h>

int main() {
    float grossSales, discount, netSales;

    printf("Enter Gross Sales: ");
    scanf("%f", &grossSales);

    discount = grossSales * 0.10;     
    netSales = grossSales - discount;  

    printf("Gross Sales: %.2f\n", grossSales);
    printf("Discount (10%%): %.2f\n", discount);
    printf("Net Sales: %.2f\n", netSales);

    return 0;
}