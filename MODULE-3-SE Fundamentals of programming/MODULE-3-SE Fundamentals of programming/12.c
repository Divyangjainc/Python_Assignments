//Accept number of students from user. I need to give 5 apples to each student. How many apples are required?
#include <stdio.h>

int main() {
    int students;
    int apples_per_student = 5;
    int total_apples;

    // Accept number of students from the user
    printf("Enter number of students: ");
    scanf("%d", &students);

    // Calculate total apples needed
    total_apples = students * apples_per_student;

    // Display the result
    printf("Total apples required = %d\n", total_apples);
    return 0;
}
if (students < 0) {
    printf("Error: Number of students cannot be negative.\n");
    return 1;
}
