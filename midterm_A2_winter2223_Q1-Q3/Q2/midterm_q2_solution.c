#include <stdio.h>
#include <stdlib.h>

int midterm_quiz_q2(char arr[], int n)
{
    int msodarct = 0;
    for (int i = 0 ; i < n ; i++)
    {
        int afterct = 0, beforect = 0;
        for (int j = 0 ; j < i ; j++) {
            if (arr[j] < arr[i]) beforect++;
        }
        for (int j = i+1 ; j < n ; j++) {
            if (arr[j] > arr[i]) afterct++;
        }
        msodarct += (afterct == beforect);
    }
    return msodarct;
}

// Do not change this function
void fillArray(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        scanf(" %c", &arr[i]);
    }
}

// Do not change the main function
int main() {
    int n = 0;
    int student_output = -2;

    // Read array length
    scanf(" %d", &n);

    // Allocate at least 1 byte so arr is never NULL (even if n==0)
    char *arr = (char*)malloc((size_t)(n > 0 ? n : 1) * sizeof(char));
    if (arr != NULL) {
        fillArray(arr, n);
        student_output = midterm_quiz_q2(arr, n);
    }

    // Print exactly what the function returned (no extra newline)
    printf("%d", student_output);

    free(arr);
    return 0;
}
