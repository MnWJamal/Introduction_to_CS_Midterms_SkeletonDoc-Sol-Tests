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


bool IsPrime(long long number) {
    if (number <= 1) return false;
    if (number == 2) return true;
    if (number % 2 == 0) return false;
    for (long long i = 3; i*i <= number ; i += 2)
    {
        if (number % i == 0) return false;
    }
    return true;
}
int midterm_quiz_q2(long long n) {
    //2^1 => 2 => 2-1 = 1 not prime, start with 2^2
    long long candidate = 4;
    int ct = 0;
    while (candidate-1 <= n) //maybe n itself is mersan, thus: <= not <
    {
        if (IsPrime(candidate-1)) ct++;
        candidate *= 2; //next power of 2
    }
    return ct;
}