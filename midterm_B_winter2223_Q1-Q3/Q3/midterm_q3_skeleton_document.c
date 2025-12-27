#include <stdio.h>
#include <stdlib.h>

int midterm_quiz_q3(int arr[], int n);


// Do not change these functions
void fillIntArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        scanf(" %d", &arr[i]);
    }
}

// Do not change the main function
int main() {
    int n = 0;
    int student_output = -2;

    scanf(" %d", &n);

    int *arr = NULL;
    if (n > 0) {
        arr = (int *)malloc(sizeof(int) * n);
        if (arr) {
            fillIntArray(arr, n);
            student_output = midterm_quiz_q3(arr, n);
        }
    }

    printf("%d", student_output);
    free(arr);

    return 0;
}

int midterm_quiz_q3(int arr[], int n) // Replace this with your function.
{
    return 0;
}
