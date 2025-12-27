#include <stdio.h>
#include <stdlib.h>

void midterm_quiz_q1(int array[], int n);

//DO NOT CHANGE THIS FUNCTION
void print_amount(int number, int amount) {
    printf("Numbers smaller than %d: %d\n", number, amount);
}

// Do not change these functions
void read_int(int *x) {
    scanf(" %d", x);
}

void fill_int_array(int array[], int n) {
    for (int i = 0; i < n; i++) {
        read_int(&array[i]);
    }
}

// Do not change the main function
int main() {
    int n = 0;
    read_int(&n);

    int *array = (int *)malloc((size_t)(n > 0 ? n : 1) * sizeof(int));
    if (!array) {
        return 0;
    }

    fill_int_array(array, n);
    midterm_quiz_q1(array, n);

    free(array);
    return 0;
}

void midterm_quiz_q1(int array[], int n) //REPLACE THIS WITH YOUR CODE
{
    
}
