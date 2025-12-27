#include <stdio.h>

#define M 4
#define N 3

int midterm_quiz_q3(int grades[M][N]); 

//DO NOT CHANGE THESE FUNCTIONS
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

int midterm_quiz_q3(int grades[M][N]){
    double studentAvg[M] = {0};
    int studentHighest[M] = {0};
    int highestgrade = 0;
    double TOP1 = 0, TOP2 = 0, TOP3 = 0;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N ; j++) {
            studentAvg[i] += grades[i][j];
            if (grades[i][j] > highestgrade) highestgrade = grades[i][j];
        }
        studentAvg[i] /= N;
        if (studentAvg[i] > TOP3) {
            if (studentAvg[i] > TOP2) {
                if (studentAvg[i] > TOP1) {
                    TOP3 = TOP2;
                    TOP2 = TOP1;
                    TOP1 = studentAvg[i];
                }
                else
                {
                    TOP3 = TOP2;
                    TOP2 = studentAvg[i];
                }
            }
            else {
                TOP3 = studentAvg[i];
            }
        }
    }
    for (int i = 0 ; i < M ; i++) {
        for (int j = 0 ; j < N ; j++) {
            if (grades[i][j] >= highestgrade) {
                studentHighest[i] = 1;
            }
        }
    }
    for (int i = 0 ; i < M ; i++) {
        if (studentHighest[i] && (studentAvg[i] >= TOP3)) {
            return i;
        }
    }
    return -1;
}
