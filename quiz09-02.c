/** quiz09-02.c
* ===========================================================
*    Name: David Petzold
* Section: T6A
* Purpose: Quiz 9
* ===========================================================
*/

#include <stdio.h>

// YOUR FUNCTION WILL GO HERE
int gcd(int num1, int num2) {
    //Recursively finds the GCD
    if (num2 == 0) {
        return num1;
    } else {
        return gcd(num2, num1 % num2);
    }
}

int main(void){

    // We highly recommend that you test your function
    return 0;

}