#include <stdio.h>

void midterm_quiz_q1(void);

//DO NOT CHANGE THIS FUNCTION
void print_value(int num) {
    if (num == -1) {
        printf("Error!\n");
    }
    else {
        printf("%d\n",num);
    }
}

//DO NOT CHANGE MAIN FUNCTION
int main(void)
{
    midterm_quiz_q1();
    return 0;
}

int IsLegalChar(char c) {
    return (c == '+' || c == '-' || c == '!' ||
        (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')||
        (c >= '0' && c <= '9'));
}
void midterm_quiz_q1(void) {
    int scanned = 0;
    int c;
    int chars[3] = {0};
    while ((c = getchar()) != EOF) {
        if (IsLegalChar(c)) {
            scanned++;
            if (scanned > 3) {
                chars[0] = chars[1];
                chars[1] = chars[2];
                chars[2] = c;
                print_value(chars[0] + chars[1] + chars[2]);
            }
            else {
                chars[scanned-1] = c;
                if (scanned == 3) {
                    print_value(chars[0] + chars[1] + chars[2]);
                }
            }

        }
        else {
            print_value(-1);
            return;
        }
    }
    if (scanned < 3) {
        int sum = 0; //no values also 0
        for (int i = 0 ; i < scanned ; i++) {
            sum += chars[i];
        }
        print_value(sum);
    }
}
