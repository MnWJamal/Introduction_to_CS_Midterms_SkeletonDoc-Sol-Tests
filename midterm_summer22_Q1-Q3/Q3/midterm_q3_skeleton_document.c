#include <stdio.h>

#define M 4
#define N 3

void midterm_quiz_q3(int pic[M][N]); // Replace this line with your function.

static void read_int(int *x) {
    scanf(" %d", x);
}

static void fill_pic(int pic[M][N]) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            read_int(&pic[i][j]);
        }
    }
}

static void print_pic(int pic[M][N]) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (j) printf(" ");
            printf("%d", pic[i][j]);
        }
        if (i != M - 1) printf("\n");
    }
}

int main(void) {
    int pic[M][N];
    fill_pic(pic);
    midterm_quiz_q3(pic);
    print_pic(pic);
    return 0;
}
