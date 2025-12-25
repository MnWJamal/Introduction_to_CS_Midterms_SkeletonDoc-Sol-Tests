#include <stdio.h>
#include <stdlib.h>
//DO NOT CHANGE THIS FUNCTION
void print_array(int array[], int n) {
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", array[i]);
    }
    printf("\n");
}

int MaxNumber(int array[], int n) {
    int max = array[0];
    for (int i = 0 ; i < n ; i++) {
        if (array[i] > max) max = array[i];
    }
    return max;
}
void SingleRotation(int array[], int n) {
    int tmp = array[n-1];
    for (int i = n-1; i > 0 ; i--) {
        array[i] = array[i-1];
    }
    array[0] = tmp;
}
void midterm_quiz_q3(int array[], int n) {
    int max = MaxNumber(array,n);
    //every n cycles we come back to arr, thus:
    //NOTE: this step is important to avoid excess rotations and timeouts
    max %= n;
    for (int i = 0 ; i < max ; i++) {
        SingleRotation(array,n);
    }
    print_array(array,n);
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
    midterm_quiz_q3(array, n);

    free(array);
    return 0;
}
