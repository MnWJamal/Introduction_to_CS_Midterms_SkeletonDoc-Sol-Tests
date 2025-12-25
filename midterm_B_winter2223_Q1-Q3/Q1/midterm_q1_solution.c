#include <stdio.h>
#include <stdbool.h>

bool midterm_quiz_q1(int num)
{
    int lastdigit = num%10;
    num /= 10;
    while (num > 0) {
        int digit = num%10;
        if (digit >= lastdigit) //A1 > A2 <=> A2 < A1
            return false;
        lastdigit = digit;
        num /= 10;
    }
    return true;
}


// Do not change the main function
int main() {
    int num = 0;
    int student_output = -2;

    scanf(" %d", &num);

    student_output = midterm_quiz_q1(num) ? 1 : 0;
    printf("%d", student_output);

    return 0;
}
