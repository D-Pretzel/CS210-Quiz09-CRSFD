/** quiz09-01.c
* ===========================================================
*    Name: David Petzold
* Section: T6A
* Purpose: Quiz 9
* ===========================================================
*/

#include <stdio.h>

// YOUR FUNCTION WILL GO HERE
int trib(int num) {
    if (num == 0) {
        return 0;
    } else if (num == 1) {
        return 0;
    } else if (num == 2) {
        return 1;
    } else {
        return trib(num - 1) + trib(num - 2) + trib(num - 3);
    }
}

int main(void){

    // We highly recommend that you test your function
    return 0;

}