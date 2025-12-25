#include <stdio.h>

int midterm_quiz_q1(void)
{
    int max1 = 0, max2 = 0, max3 = 0;
    int max1init = 0, max2init = 0, max3init = 0;
    int num;
    while (scanf("%d",&num) != EOF) {
        if (max1init && max2init && max3init) {
            if (num > max1) {
                max3 = max2;
                max2 = max1;
                max1 = num;
            }
            else if (num > max2)
            {
                max3 = max2;
                max2 = num;
            }
            else if (num > max3)
            {
                max3 = num;
            }
        }
        else if (!max1init)
        {
            max1 = num;
            max1init = 1;
        }
        else if (!max2init)
        {
            if (num > max1) {
                max2 = max1;
                max1 = num;
            }
            else
            {
                max2 = num;
            }
            max2init = 1;
        }
        else if (!max3init)
        {
            if (num > max1) {
                max3 = max2;
                max2 = max1;
                max1 = num;
            }
            else if (num > max2)
            {
                max3 = max2;
                max2 = num;
            }
            else
            {
                max3 = num;
            }
            max3init = 1;
        }
    }
    int sum = 0;
    if (max1init) sum += max1;
    if (max2init) sum += max2;
    if (max3init) sum += max3;
    return sum;
}

// Do not change the main function
int main(void) {
    int student_output = midterm_quiz_q1();
    printf("%d", student_output);
    return 0;
}
