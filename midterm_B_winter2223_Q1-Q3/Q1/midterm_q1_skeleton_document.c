#include <stdio.h>
#include <stdbool.h>

bool midterm_quiz_q1(int num);


// Do not change the main function
int main() {
    int num = 0;
    int student_output = -2;

    scanf(" %d", &num);

    student_output = midterm_quiz_q1(num) ? 1 : 0;
    printf("%d", student_output);

    return 0;
}

bool midterm_quiz_q1(int num) // Replace this with your function.
{
    return true;
}
