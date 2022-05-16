#include <stdio.h>

/*
    Ex. 1.5: Modify the temperature conversion program to print the table in 
    reverse order, that is, from 300 degrees to 0.
*/

int main(void) {

    for (int farh = 300; farh >= 0; farh = farh - 20) {

        printf("%3d%6.1f\n", farh, (5.0/9.0) * (farh - 32));

    }

}