#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define DONT_KNOW "I_dont_know"
void printIDontKnow() {
    printf("%s", DONT_KNOW);
    exit(0);
}

int midterm_quiz_q3(int arr[], int n);

// Do not change read_arr!!!
int* read_arr(int* n) {
    if (scanf("%d", n) != 1) return NULL;
    int* arr = malloc((*n) * sizeof(int));
    if (!arr) return NULL;
    for (int i = 0; i < *n; i++) {
        if (scanf("%d", arr+i) != 1) {
            free(arr);
            return NULL;
        }
    }
    return arr;
}

//Uncomment the first line in main if you don't know the answer.
//Otherwise, do not change main!!!
int main() {
    // printIDontKnow();

    int n;
    int* arr = read_arr(&n);
    if (!arr) return 1;
    printf("%d", midterm_quiz_q3(arr, n));
    free(arr);
    return 0;
}

int SumOfDivisors(int number) {
    if (number == 0) return 1;
    int sum = 0;
    for (int i = 1; i < number ; i++) // "< number", since, must not include it
    {
        if (number % i == 0) sum += i;
    }
    return sum;
}
int midterm_quiz_q3(int arr[], int n) {
    int count = 0;
    for (int i = 0 ; i < n ; i++) {
        if (arr[i] == SumOfDivisors(arr[i])) count++;
    }
    return count;
}