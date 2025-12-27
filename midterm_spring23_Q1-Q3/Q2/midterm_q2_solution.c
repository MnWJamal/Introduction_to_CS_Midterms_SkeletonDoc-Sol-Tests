#include <stdio.h>
#include <stdlib.h>

void midterm_quiz_q2(char array[], int n, int k);

//DO NOT CHANGE THIS FUNCTION
void print_k(int k, int amount) {
    printf("Amount of chars that appear %d times: %d\n", k, amount);
}

// Do not change these functions
void read_int(int *x) {
    scanf(" %d", x);
}

void fill_char_array(char array[], int n) {
    for (int i = 0; i < n; i++) {
        scanf(" %c", &array[i]);
    }
}

// Do not change the main function
int main() {
    int n = 0, k = 0;

    read_int(&n);
    char *array = (char *)malloc((size_t)(n > 0 ? n : 1) * sizeof(char));
    if (!array) {
        return 0;
    }

    fill_char_array(array, n);
    read_int(&k);

    midterm_quiz_q2(array, n, k);

    free(array);
    return 0;
}


void midterm_quiz_q2(char array[], int n, int k) {
    if (k < 0) {
        print_k(k,0);
        return;
    }
    int charHist[128] = {0};
    for (int i = 0 ; i < n; i++) {
        if (array[i] < 0 || array[i] > 127) continue;
        charHist[(int)array[i]]++;
    }
    int ct = 0;
    for (int i = 0 ; i < 128 ; i++) {
        if (charHist[i] == k) ct++;
    }
    print_k(k,ct);
}

