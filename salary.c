#include <stdio.h>

int main() {
    float basic, allowances, gross, deductions, net;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    allowances = 0.10 * basic;       
    gross = basic + allowances;         
    deductions = 0.03 * gross;          
    net = gross - deductions;    

    printf("\nBasic Salary   : %.2f", basic);
    printf("\nAllowances (10%% of Basic) : %.2f", allowances);
    printf("\nGross Salary   : %.2f", gross);
    printf("\nDeductions (3%% of Gross) : %.2f", deductions);
    printf("\n------------------------------");
    printf("\nNet Salary     : %.2f\n", net);

    return 0;
}
