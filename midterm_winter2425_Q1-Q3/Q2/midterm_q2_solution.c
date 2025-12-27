#include <stdio.h>

void midterm_quiz_q2(int n);

//DO NOT CHANGE THIS FUNCTION
void print_value(int num) {
    printf("%d ",num);
}

//DO NOT CHANGE THE MAIN FUNCTION
int main(void)
{
    int n = 0;
    if (scanf("%d", &n) != 1) return 0;
    midterm_quiz_q2(n);
    return 0;
}

int IsPrime(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if ( n%2 == 0) return 0;
    for (int i = 3; i*i <= n; i+= 2) {
        if (n%i == 0) return 0;
    }
    return 1;
}
void midterm_quiz_q2(int n)
{
    if (2 <= n) print_value(2);
    for (int i = 3; i <= n; i+=2) {
        if (IsPrime(i)) print_value(i);
    }
}
