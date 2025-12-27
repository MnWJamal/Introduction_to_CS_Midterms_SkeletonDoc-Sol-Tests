#include <stdio.h>
#include <stdlib.h>

int midterm_quiz_q3(int arr[], int n, int k);

// Do not change this function
void fillArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        scanf(" %d", &arr[i]);
    }
}

// Do not change the main function
int main() {
    int n = 0;
    int k = 0;
    int student_output = -2;

    // Read array length
    scanf(" %d", &n);

    // Allocate at least 1 int so arr is never NULL (even if n==0)
    int *arr = (int*)malloc((size_t)(n > 0 ? n : 1) * sizeof(int));
    if (arr != NULL) {
        fillArray(arr, n);
        scanf(" %d", &k);
        student_output = midterm_quiz_q3(arr, n, k);
    }

    // Print exactly what the function returned (no extra newline)
    printf("%d", student_output);

    free(arr);
    return 0;
}

int midterm_quiz_q3(int arr[], int n, int k) //replace with your code
{
    return 0;
}
