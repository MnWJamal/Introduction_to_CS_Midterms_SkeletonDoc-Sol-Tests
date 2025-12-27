#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool midterm_quiz_q2(char arr[], int n1, char key[], int n2); 


// Do not change these functions
void fillCharArray(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        scanf(" %c", &arr[i]);
    }
}

// Do not change the main function
int main() {
    int n1 = 0, n2 = 0;
    int student_output = -2;
    scanf(" %d", &n1);
    char *arr = (char *)malloc(sizeof(char) * n1);
    fillCharArray(arr, n1);
    scanf(" %d", &n2);
    char *key = (char *)malloc(sizeof(char) * n2);
    fillCharArray(key, n2);
    if ((n1 == 0 || arr) && (n2 == 0 || key)) {
        student_output = midterm_quiz_q2(arr, n1, key, n2) ? 1 : 0;
    }
    printf("%d", student_output);
    free(arr);
    free(key);
    return 0;
}



bool midterm_quiz_q2(char arr[], int n1, char key[], int n2) //REPLACE WITH YOUR CODE
{
    return true;
}
