#include <stdio.h>
#include <stdlib.h>

int midterm_quiz_q2(int arr[], int n){
    if (n <= 0) return 0;
    int sum = 0;
    for (int i = 0 ; i < n ; i++) {
        sum += arr[i];
    }
    double average = (double)(sum) / n;
    int ct = 0;
    for (int i = 0 ; i < n ; i++) {
        if (((double)arr[i]) > average) {
            ct++;
        }
    }
    return ct;
}

static int read_int(void) {
    int x = 0;
    scanf(" %d", &x);
    return x;
}

static int *alloc_ints(int n) {
    if (n <= 0) return (int *)malloc(1);
    return (int *)malloc((size_t)n * sizeof(int));
}

static void fill_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        scanf(" %d", &arr[i]);
    }
}

static void print_int(int x) {
    printf("%d", x);
}

int main(void) {
    int n = read_int();
    int *arr = alloc_ints(n);
    if (!arr) return 0;

    fill_array(arr, n);
    int ans = midterm_quiz_q2(arr, n);
    print_int(ans);

    free(arr);
    return 0;
}
