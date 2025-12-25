#include <stdio.h>

#define M 4
#define N 3

int IsMax(int pic[M][N], int pR ,int pC)
{
    int topleft = (pR-1 < 0 || pC-1 < 0)? 1 : (pic[pR-1][pC-1] < pic[pR][pC]);
    int top = (pR-1 < 0)? 1 : (pic[pR-1][pC] < pic[pR][pC]);
    int topright = (pR-1 < 0 || pC+1 >= N)? 1 : (pic[pR-1][pC+1] < pic[pR][pC]);
    int buttomleft = (pR+1 >= M || pC-1 < 0)? 1 : (pic[pR+1][pC-1] < pic[pR][pC]);
    int buttom = (pR+1 >= M)? 1 : (pic[pR+1][pC] < pic[pR][pC]);
    int buttomright = (pR+1 >= M || pC+1 >= N)? 1 : (pic[pR+1][pC+1] < pic[pR][pC]);
    int left = (pC-1 < 0)? 1 : (pic[pR][pC-1] < pic[pR][pC]);
    int right = (pC+1 >= N)? 1 : (pic[pR][pC+1] < pic[pR][pC]);
    return (top && buttom && left && right && topleft && topright && buttomleft && buttomright);
}
int IsMin(int pic[M][N], int pR ,int pC)
{
    int topleft = (pR-1 < 0 || pC-1 < 0)? 1 : (pic[pR-1][pC-1] > pic[pR][pC]);
    int top = (pR-1 < 0)? 1 : (pic[pR-1][pC] > pic[pR][pC]);
    int topright = (pR-1 < 0 || pC+1 >= N)? 1 : (pic[pR-1][pC+1] > pic[pR][pC]);
    int buttomleft = (pR+1 >= M || pC-1 < 0)? 1 : (pic[pR+1][pC-1] > pic[pR][pC]);
    int buttom = (pR+1 >= M)? 1 : (pic[pR+1][pC] > pic[pR][pC]);
    int buttomright = (pR+1 >= M || pC+1 >= N)? 1 : (pic[pR+1][pC+1] > pic[pR][pC]);
    int left = (pC-1 < 0)? 1 : (pic[pR][pC-1] > pic[pR][pC]);
    int right = (pC+1 >= N)? 1 : (pic[pR][pC+1] > pic[pR][pC]);
    return (top && buttom && left && right && topleft && topright && buttomleft && buttomright);
}
void midterm_quiz_q3(int pic[M][N]){
    int Kitson[M][N];
    for (int i = 0 ; i < M ; i++) {
        for (int j = 0 ; j < N; j++) {
            Kitson[i][j] = (IsMax(pic,i,j) || IsMin(pic,i,j));
        }
    }
    for (int i = 0 ; i < M ; i++) {
        for (int j = 0 ; j < N; j++) {
            if (Kitson[i][j]) pic[i][j] = -1;
        }
    }
}

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
