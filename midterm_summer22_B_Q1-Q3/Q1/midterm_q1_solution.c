#include <stdio.h>

int midterm_quiz_q1(int num);

static int read_int(void) {
    int x = 0;
    scanf(" %d", &x);
    return x;
}

static void print_int(int x) {
    printf("%d", x);
}

// Do not change the main function
int main(void) {
    int num = read_int();
    int student_output = midterm_quiz_q1(num);
    print_int(student_output);
    return 0;
}

int midterm_quiz_q1(int num) {
    if(num <= 0) return 0;
    int divisorsum = 0;
    for (int i = 1 ; i < num ; i++) {
        if (num%i == 0) divisorsum += i;
    }
    return (num == divisorsum);
}
