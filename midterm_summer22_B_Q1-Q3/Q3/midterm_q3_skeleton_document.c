#include <stdio.h>

#define M 4
#define N 3

int midterm_quiz_q3(int grades[M][N]); // Replace this line with your function.

static void read_int(int *x) {
    scanf(" %d", x);
}

static void fill_grades(int grades[M][N]) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            read_int(&grades[i][j]);
        }
    }
}

static void print_int(int x) {
    printf("%d", x);
}

// Do not change the main function
int main(void) {
    int grades[M][N];
    fill_grades(grades);
    int ans = midterm_quiz_q3(grades);
    print_int(ans);
    return 0;
}
