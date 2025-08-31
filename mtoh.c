#include <stdio.h>

int main() {
    int minutes, hours, remainingminutes;

    printf("Enter minutes");
    scanf("%d", &minutes);

    hours = minutes / 60;
    remainingminutes = minutes % 60;

    printf("%d minutes = %d hours and %d minutes\n",minutes,hours,remainingminutes);

    return 0;
}