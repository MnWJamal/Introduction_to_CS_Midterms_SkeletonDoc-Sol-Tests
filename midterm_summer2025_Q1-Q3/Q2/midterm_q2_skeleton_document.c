#include <stdio.h>
#include <stdlib.h>

void midterm_quiz_q2(char arr[], int n); // Replace this line with your function.

// Do not change these functions
int read_int(void) {
    int x = 0;
    scanf(" %d", &x);
    return x;
}

char *alloc_chars(int n) {
    if (n <= 0) return (char *)malloc(1);
    return (char *)malloc((size_t)n * sizeof(char));
}

void fill_char_array(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        scanf(" %c", &arr[i]);
    }
}

void print_char_array(const char arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (i) printf(" ");
        printf("%c", arr[i]);
    }
    printf("\n");
}

// Do not change the main function
int main(void) {
    int n = read_int();
    char *arr = alloc_chars(n);
    if (!arr) return 0;

    fill_char_array(arr, n);
    midterm_quiz_q2(arr, n);
    print_char_array(arr, n);

    free(arr);
    return 0;
}
