#include <stdio.h>

/*
  Question 1 – Final digit sum
  Implement:
    int midterm_q1(int num);
*/
int midterm_q1(int num);

int main(void)
{
    int num = 0;
    int student_output = -2;

    if (scanf("%d", &num) == 1) {
        student_output = midterm_q1(num);
    }

    printf("%d", student_output);
    return 0;
}
