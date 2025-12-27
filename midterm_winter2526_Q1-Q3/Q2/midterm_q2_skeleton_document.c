#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define DONT_KNOW "I_dont_know"
void printIDontKnow() {
    printf("%s", DONT_KNOW);
    exit(0);
}

int midterm_quiz_q2(long long n);

//Uncomment the first line in main if you don't know the answer.
//Otherwise, do not change main!!!
int main() {
    // printIDontKnow();

    long long n;
    if (scanf("%lld", &n) != 1)
    {
        return 1;
    }
    printf("%d", midterm_quiz_q2(n));
    return 0;
}

int midterm_quiz_q2(long long n) {
    // Write your code here:

    return 0;
}