#include <stdio.h>

int midterm_quiz_q1(int num){
    int sumofdivisors = 0;
    for (int i = 1 ; i <= num ; i++) {
        if (num%i == 0) sumofdivisors += i;
    }
    return (sumofdivisors > 2*num);
}

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
