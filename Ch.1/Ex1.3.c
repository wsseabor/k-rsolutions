#include <stdio.h>

/*
Ex 1.3: Modify the temperature conversion program to print a heading above the table.

printf statement must be outside of while loop, used before the loop is initiated. Bonus points
for proper width formatting.
*/

int main (void) {

    int farh, cel;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    farh = lower; 

    printf("%10s\n", "Conversion");
    printf("%3s%6s\n", "F", "C");
    printf("%s\n", "----------");

    while (farh <= upper) {

        cel = 5 * (farh - 32) /9;

        printf("%3d\t%6d\n", farh, cel);

        farh += step;

    }

}