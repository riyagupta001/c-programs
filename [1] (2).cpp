#include <stdio.h>
#include <stdlib.h>

int marks_summation(int* marks, int number_of_students, char gender) {
    int sum = 0;

    if (gender == 'b') {
        // Sum the marks of boys (even indexes)
        for (int i = 0; i < number_of_students; i += 2) {
            sum += marks[i];
        }
    } else if (gender == 'g') {
        // Sum the marks of girls (odd indexes)
        for (int i = 1; i < number_of_students; i += 2) {
            sum += marks[i];
        }
    }

    return sum;
}

int main() {
    int number_of_students;
    char gender;

    printf("Enter the number of students: ");
    scanf("%d", &number_of_students);

    int *marks = (int *) malloc(number_of_students * sizeof(int));

    printf("Enter the marks for %d students:\n", number_of_students);
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", &marks[student]);
    }

    printf("Enter gender ('b' for boys, 'g' for girls): ");
    scanf(" %c", &gender);

    int sum = marks_summation(marks, number_of_students, gender);
    printf("Sum of marks: %d\n", sum);

    free(marks);

    return 0;
}
