#include <stdio.h>
#include <stdlib.h>

double midterm_q2(double arr[], int n);

//DO NOT CHANGE THESE FUNCTIONS
static void readArray(double *arr, int n)
{
    for (int i = 0; i < n; i++) {
        scanf(" %lf", &arr[i]);
    }
}

static double absd(double x) { return (x < 0.0) ? -x : x; }

static int closeEnough(double a, double b)
{
    /* relative+absolute tolerance without <math.h> */
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

    double expected = 0.0;
    scanf(" %lf", &expected);

    double got = midterm_q2(arr, n);
    printf("%d", closeEnough(got, expected));

    free(arr);
    return 0;
}

double midterm_q2(double arr[], int n) //Replace with your function
{
    return 0.0;
}
