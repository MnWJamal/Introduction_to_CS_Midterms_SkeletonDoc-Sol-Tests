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


int midterm_quiz_q3(int arr[], int n) {
    int maxfreq = 0;
    int num = 0;
    for (int i = 0 ; i < n ; i++) {
        int freq = 0;
        for (int j = 0 ; j < n ; j++) {
            if (arr[j] == arr[i]) freq++;
        }
        if (freq > maxfreq) {
            num = arr[i];
            maxfreq = freq;
        }
        else if(freq == maxfreq && arr[i] < num)
        {
            num = arr[i];
        }
    }
    return num;
}
