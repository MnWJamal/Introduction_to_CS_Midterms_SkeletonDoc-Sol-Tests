#include <stdio.h>
#include <stdlib.h>

double midterm_q3(double arr[], int n, int idx) {
    double part1 = (idx >= 2)? 0.1 * arr[idx-2] : 0;
    double part2 = (idx >= 1)? 0.2 * arr[idx-1] : 0;
    double part3 = 0.4 * arr[idx];
    double part4 = (idx <= n-2)? 0.2 * arr[idx+1] : 0;
    double part5 = (idx <= n-3)? 0.1 * arr[idx+2] : 0;
    return (part1 + part2 + part3 + part4 + part5);
}

static void readArray(double *arr, int n)
{
    for (int i = 0; i < n; i++) {
        scanf(" %lf", &arr[i]);
    }
}

static double absd(double x) { return (x < 0.0) ? -x : x; }

static int closeEnough(double a, double b)
{
    const double EPS = 1e-9;
    double diff = absd(a - b);
    double scale = 1.0 + absd(b);
    return diff <= EPS * scale;
}

int main(void)
{
    int n = 0;
    if (scanf("%d", &n) != 1) return 0;

    double *arr = (double*)malloc((size_t)n * sizeof(double));
    if (!arr) return 0;

    readArray(arr, n);

    int idx = 0;
    scanf("%d", &idx);

    double expected = 0.0;
    scanf(" %lf", &expected);

    double got = midterm_q3(arr, n, idx);
    printf("%d", closeEnough(got, expected));

    free(arr);
    return 0;
}
