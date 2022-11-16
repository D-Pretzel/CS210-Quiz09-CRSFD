/** quiz09-03.c
* ===========================================================
*    Name: David Petzold
* Section: T6A
* Purpose: Quiz 9
* ===========================================================
*/

#include <stdio.h>
#include <string.h>

// YOUR FUNCTION WILL GO HERE
int countNonmatches(char string[], char letter, int accumulator) {
    if (string[accumulator] == '\0') {
        return 0;
    } else if (string[accumulator] == letter) {
        return countNonmatches(string, letter, accumulator + 1);
    } else {
        return 1 + countNonmatches(string, letter, accumulator + 1);
    }
}

int main(void){

    // We highly recommend that you test your function
    return 0;

}