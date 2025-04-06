#include <stdio.h>

int main() {
    float midterm, final, homework, total;
    char grade;
    
    // Input scores
    printf("Enter Mid-term score (0-100): ");
    scanf("%f", &midterm);
    printf("Enter Final score (0-100): ");
    scanf("%f", &final);
    printf("Enter Homework score (0-10): ");
    scanf("%f", &homework);
    
    // Calculate total score with weights
    total = (midterm * 0.4) + (final * 0.5) + (homework * 10 * 0.1);
    
    // Determine grade using nested-if
    if (total >= 90 && total <= 100) {
        grade = 'A';
    } else if (total >= 85 && total <= 89) {
        grade = 'B';
        printf("+");
    } else if (total >= 80 && total <= 84) {
        grade = 'B';
    } else if (total >= 70 && total <= 79) {
        grade = 'C';
        printf("+");
    } else if (total >= 60 && total <= 69) {
        grade = 'C';
    } else if (total >= 55 && total <= 59) {
        grade = 'D';
        printf("+");
    } else if (total >= 50 && total <= 54) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    
    // Display results
    printf("\nTotal Score: %.2f\n", total);
    printf("Grade: %c\n", grade);
    return 0;
}




