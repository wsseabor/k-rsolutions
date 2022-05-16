#include <stdio.h>

/* 
Exercise 1.4: Write a program to  print the corresponding celcius to farenheit table.
*/

int main(void) {

    double farh, cels;
    double lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    cels = lower;

    printf("%12s\n", "Conversion");
    printf("%3s%9s\n", "C", "F");
    printf("%s\n", "--------------");

    while (cels <= upper) {

        farh = (cels * 1.8) + 32;

        printf("%2.2f\t%2.2f\n", cels, farh);

        cels += step;

    }

}