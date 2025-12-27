#include <stdio.h>
#include <stdlib.h>

void midterm_quiz_q3(char arr[], int n);

//DO NOT CHANGE THESE FUNCTIONS
static void readArr(char *arr, int n)
{
    for (int i = 0; i < n; i++) {
        scanf(" %c", &arr[i]);
    }
}

static int equalArr(const char *a, const char *b, int n)
{
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) return 0;
    }
    return 1;
}

int main(void)
{
    int n = 0;
    if (scanf("%d", &n) != 1) return 0;

    char *arr   = (char*)malloc((size_t)n * sizeof(char));
    char *poss1 = (char*)malloc((size_t)n * sizeof(char));
    char *poss2 = (char*)malloc((size_t)n * sizeof(char));
    if (!arr || !poss1 || !poss2) {
        free(arr); free(poss1); free(poss2);
        return 0;
    }

    /* Input format:
       n
       <n chars for original array>
       <n chars for possible output #1>
       <n chars for possible output #2>
    */
    readArr(arr, n);
    readArr(poss1, n);
    readArr(poss2, n);

    midterm_quiz_q3(arr, n);

    int ok = equalArr(arr, poss1, n) || equalArr(arr, poss2, n);
    printf("%d", ok);

    free(arr);
    free(poss1);
    free(poss2);
    return 0;
}


void midterm_quiz_q3(char arr[], int n)
{
    int mid = (n-1)/2;
    if (arr[mid] != '.') {
        arr[mid] = '.';
        return;
    }
    for (int i = 0 ; i < mid ; i++) {
        if (arr[i] != arr[n-1-i]) {
            if (arr[i] >= '0' && arr[i] <= '9') {
                arr[n-1-i] = arr[i];
            }
            else arr[i] = arr[n-1-i];
            return;
        }
    }
}
