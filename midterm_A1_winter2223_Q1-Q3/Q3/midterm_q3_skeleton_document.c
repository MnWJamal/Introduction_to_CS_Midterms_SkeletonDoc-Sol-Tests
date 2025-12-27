#include <stdio.h>
#include <stdlib.h>

double midterm_quiz_q3(int arr[], int n, int idx);

// Do not change this function
void fillArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        scanf(" %d", &arr[i]);
    }
}

// Do not change the main function
int main() {
    int n = 0;
    int idx = 0;
    double student_output = -2.0;

    // Read array length
    scanf(" %d", &n);

    int *arr = NULL;
    if (n > 0) {
        arr = (int*)malloc((size_t)n * sizeof(int));
    }

    if (arr != NULL) {
        fillArray(arr, n);
        scanf(" %d", &idx);
        student_output = midterm_quiz_q3(arr, n, idx);
    }

    // Print the returned value (no extra newline)
    printf("%.10g", student_output);

    free(arr);
    return 0;
}

double midterm_quiz_q3(int arr[], int n, int idx)// Replace with your code.
{
    return 0.0;
}
