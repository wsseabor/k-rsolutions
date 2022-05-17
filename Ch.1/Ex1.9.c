#include <stdio.h>

/* Ex 1.8 - Write a program that copies its input to its output, replacing each string
of one or more blanks by a single blank. */

#define IN 1
#define OUT 0

int main(void) {

    int c;
    int wflag = OUT;

    while ((c = getchar()) != EOF) {

        if (c == ' ') {
            if (wflag == OUT) {

                putchar(c);
                wflag = IN;

            }

        }

        else {

            putchar(c);
            wflag = OUT;
        }

    }

}