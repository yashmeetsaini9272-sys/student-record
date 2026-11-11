#include <stdio.h>

#define MAX_STUDENTS 50
#define SUBJECTS 3
#define NAME_LENGTH 50

int main(void)
{
    char names[MAX_STUDENTS][NAME_LENGTH];
    int marks[MAX_STUDENTS][SUBJECTS];
    int student_count;

    printf("How many students (1-%d)? ", MAX_STUDENTS);
    if (scanf("%d", &student_count) != 1 ||
        student_count < 1 || student_count > MAX_STUDENTS) {
        printf("Invalid number of students.\n");
        return 1;
    }

    for (int i = 0; i < student_count; i++) {
        printf("\nEnter student %d name: ", i + 1);
        if (scanf(" %49[^\n]", names[i]) != 1) {
            printf("Invalid student name.\n");
            return 1;
        }

        for (int j = 0; j < SUBJECTS; j++) {
            printf("Enter mark for subject %d: ", j + 1);
            if (scanf("%d", &marks[i][j]) != 1 ||
                marks[i][j] < 0 || marks[i][j] > 100) {
                printf("Invalid mark. Enter a number from 0 to 100.\n");
                return 1;
            }
        }
    }

    printf("\nStudent results:\n");
    for (int i = 0; i < student_count; i++) {
        int total = 0;

        for (int j = 0; j < SUBJECTS; j++) {
            total += marks[i][j];
        }

        printf("%s: Marks = %d, %d, %d | Total Marks = %d/%d | Average = %.2f\n",
               names[i], marks[i][0], marks[i][1], marks[i][2],
               total, SUBJECTS * 100, (double)total / SUBJECTS);
    }

    printf("\nPress Enter to exit...");
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF) {
    }
    if (ch != EOF) {
        getchar();
    }

    return 0;
}
