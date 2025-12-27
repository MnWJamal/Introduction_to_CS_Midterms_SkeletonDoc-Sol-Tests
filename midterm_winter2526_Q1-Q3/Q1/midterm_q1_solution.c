#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define DONT_KNOW "I_dont_know"
void printIDontKnow() {
    printf("%s", DONT_KNOW);
    exit(0);
}

int midterm_quiz_q1(char arr[], int n);

// Do not change read_arr!!!
char* read_arr(int* n) {
    if (scanf("%d", n) != 1) return NULL;
    char* arr = malloc((*n) * sizeof(char));
    if (!arr) return NULL;
    for (int i = 0; i < *n; i++) {
        if (scanf(" %c", arr+i) != 1) {
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
    char* arr = read_arr(&n);
    if (!arr) return 1;
    printf("%d", midterm_quiz_q1(arr, n));
    free(arr);
    return 0;
}

int midterm_quiz_q1(char arr[], int n){
    int Histchar['z' - 'a' + 1] = {0};
    for (int i = 0 ; i < n ; i++)
    {
        Histchar[arr[i]-'a']++;
    }
    int ct = 0;
    for (int i = 0 ; i < 'z' - 'a' + 1 ; i++) {
        ct += (Histchar[i] > 0);
    }
    return ct;
}