int main() {
    int sub1, sub2, sub3, total;
    float average;

    printf("Enter marks of Subject 1: ");
    scanf("%d", &sub1);

    printf("Enter marks of Subject 2: ");
    scanf("%d", &sub2);

    printf("Enter marks of Subject 3: ");
    scanf("%d", &sub3);

    total = sub1 + sub2 + sub3;          
    average = total / 3.0;               

    printf("\nTotal Marks = %d\n", total);
    printf("Average Marks = %.2f\n", average);

    return 0;
}