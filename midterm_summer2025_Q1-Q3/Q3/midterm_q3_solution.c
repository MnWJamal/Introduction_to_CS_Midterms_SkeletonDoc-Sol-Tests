#include <stdio.h>
#include <stdlib.h>

int midterm_quiz_q3(int arr[], int n) {
    int maxsum = 0;
    for (int i = 0 ; i < n ; i++) {
        int stackingsum = 0;
        for (int j = i ; j < n ; j++) {
            stackingsum += arr[j];
            if (stackingsum > maxsum) maxsum = stackingsum;
        }
    }
    return maxsum;
}

// Do not change these functions
int read_int(void) {
    int x = 0;
    scanf(" %d", &x);
    return x;
}

int *alloc_ints(int n) {
    if (n <= 0) return (int *)malloc(sizeof(int));
    return (int *)malloc((size_t)n * sizeof(int));
}

void fill_int_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = read_int();
    }
}

// Do not change the main function
int main(void) {
    int n = read_int();
    int *arr = alloc_ints(n);
    if (!arr) return 0;

    fill_int_array(arr, n);
    int student_output = midterm_quiz_q3(arr, n);
    printf("%d", student_output);

    free(arr);
    return 0;
}
