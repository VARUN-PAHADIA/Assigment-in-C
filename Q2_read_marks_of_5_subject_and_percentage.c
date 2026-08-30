#include <stdio.h>

int main() {
    int maths = 99, eng = 95, ss = 90, sci = 97, hindi = 93;

    printf("Subject wise marks\n");

    printf("maths = %d eng = %d ss = %d sci = %d hindi = %d\n",
           maths, eng, ss, sci, hindi);

    int total = maths + eng + ss + sci + hindi;

    printf("Total marks = %d\n", total);

    printf("Percentage obtained = %d\n", total / 5);

    return 0;
}