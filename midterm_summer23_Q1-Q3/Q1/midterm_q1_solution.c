#include <stdio.h>


int SumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num%10;
        num /= 10;
    }
    return sum;
}
int midterm_q1(int num) {
    while (num >= 10) {
        num = SumOfDigits(num);
    }
    return num;
}

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
