#include <stdio.h>

int midterm_quiz_q1(int d1, int m1, int y1, int d2, int m2, int y2);

// Do not change the main function
int main() {
    int d1 = 0, m1 = 0, y1 = 0, d2 = 0, m2 = 0, y2 = 0;
    int student_output = -2;

    // Read the two dates: d1 m1 y1 d2 m2 y2
    scanf(" %d %d %d %d %d %d", &d1, &m1, &y1, &d2, &m2, &y2);

    student_output = midterm_quiz_q1(d1, m1, y1, d2, m2, y2);

    // Print exactly what the function returned (no extra newline)
    printf("%d", student_output);
    return 0;
}


int midterm_quiz_q1(int d1, int m1, int y1, int d2, int m2, int y2) {
    if (y1 == y2) {
        if (m1 == m2) {
            if (d1 == d2) {
                return 0;
            }
            else
            {
                if (d1 > d2) return 1;
                return -1;
            }
        }
        else
        {
            if (m1 > m2) return 1;
            return -1;
        }
    }
    else
    {
        if (y1 > y2) return 1;
        return -1;
    }
}

