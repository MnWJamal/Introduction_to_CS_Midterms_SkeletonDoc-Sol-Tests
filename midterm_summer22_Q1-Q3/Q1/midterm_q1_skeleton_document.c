#include <stdio.h>

int midterm_quiz_q1(int num); // Replace this line with your function.

static int read_int(void) {
    int x = 0;
    scanf(" %d", &x);
    return x;
}

static void print_int(int x) {
    printf("%d", x);
}

int main(void) {
    int num = read_int();
    int ans = midterm_quiz_q1(num);
    print_int(ans);
    return 0;
}
