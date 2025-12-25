#include <stdio.h>

int midterm_quiz_q1(double num); //REPLACE WITH YOUR CODE

// Do not change the main function
int main() {
    double num = 0.0;
    int student_output = -2;

    // Read a real number
    scanf(" %lf", &num);

    // Call the required function
    student_output = midterm_quiz_q1(num);

    // Print exactly what the function returned (no extra newline)
    printf("%d", student_output);
    return 0;
}
