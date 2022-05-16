#include <stdio.h>

/* 
Ex. 1.8: Write a program to count blanks, tabs, and newlines.
*/

int main(void) {

    int c, b, t, nl;

    b = 0;
    t = 0;
    nl = 0;

    while((c = getchar()) != EOF) {

        if (c == ' ') {
            ++b;
        }

        if (c == '\t'){
            ++t;
        }

        if (c == '\n') {
            ++nl;

        }

    }

    printf("%s%d\t%d\t%d\n", "Counts of white space, tabs, and newlines:", b, t, nl);

}