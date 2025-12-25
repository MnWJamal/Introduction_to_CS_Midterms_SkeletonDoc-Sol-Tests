#include <stdio.h>
//DO NOT CHANGE THIS FUNCTION
void print_value(int num) {
    printf("%d ",num);
}

void midterm_quiz_q2(int n); //WRITE YOUR CODE HERE

//DO NOT CHANGE THE MAIN FUNCTION
int main(void)
{
    int n = 0;
    if (scanf("%d", &n) != 1) return 0;
    midterm_quiz_q2(n);
    return 0;
}
