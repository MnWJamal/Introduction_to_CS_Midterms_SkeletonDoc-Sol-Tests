#include <stdio.h>

int midterm_quiz_q1(double num);

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

int midterm_quiz_q1(double num) {
    if (num < 0) num *= -1;
    int flt1 = num;
    num =  ((num - (int)num)*1000);
    int flt2 = (num + 0.5);
    int sum = 0;
    while (flt1 > 0) {
        sum += (int)flt1%10;
        flt1 /= 10;
    }
    while (flt2 > 0) {
        sum += (int)flt2%10;
        flt2 /= 10;
    }
    return sum;
}

