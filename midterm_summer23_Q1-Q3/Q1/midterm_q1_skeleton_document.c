#include <stdio.h>

int midterm_q1(int num);

//do not change the main function
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

int midterm_q1(int num) //Replace this with your function
{
  return 0;
}
