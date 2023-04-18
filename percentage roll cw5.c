#include <stdio.h>
#include <string.h>

int main() {
    int rollNo, marks1, marks2, marks3;
    float percentage, totalMarks;
    char name[20], division[10];
    

    printf("Enter roll number: ");
    scanf("%d", &rollNo);
    
    printf("Enter name: ");
    scanf("%s", name);
    
    printf("Enter marks in three subjects: ");
    scanf("%d %d %d", &marks1, &marks2, &marks3);
    
    
    totalMarks = marks1 + marks2 + marks3;
    percentage = (totalMarks / 300) * 100;
    
    if (percentage >= 70) {
        strcpy(division, "First");
    } else if (percentage >= 60) {
        strcpy(division, "Second");
    } else if (percentage >= 50) {
        strcpy(division, "Third");
    } else {
        strcpy(division, "Fail");
    }
    
    printf("Roll Number: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Marks: %d %d %d\n", marks1, marks2, marks3);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Division: %s\n", division);
    
    return 0;
}
