#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool midterm_quiz_q2(int arr[], int n) {
    for (int i = 0 ; i < n ; i ++) {
        int seen = 0;
        for (int j = 0 ; j < n ; j++) {
            if (arr[j] == arr[i]) seen++;
        }
        if (seen != arr[i]) return false;
    }
    return true;
}

// Do not change this function
void fillArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        scanf(" %d", &arr[i]);
    }
}

// Do not change the main function
int main() {
    int n = 0;
    int student_output = -2;

    // Read array length
    scanf(" %d", &n);

    int *arr = NULL;
    if (n > 0) {
        arr = (int*)malloc((size_t)n * sizeof(int));
    }

    if (n == 0 || arr != NULL) {
        fillArray(arr, n);
        bool res = midterm_quiz_q2(arr, n);
        student_output = res ? 1 : 0;
    }

    // Print 1 if true, 0 otherwise (no extra newline)
    printf("%d", student_output);

    free(arr);
    return 0;
}
