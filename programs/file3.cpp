#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main() {
 int target_code = 1234;  // Change this to the generated code
    int cracked_code = 1000; // Start from 1000

    while (cracked_code <= 9999) {
        if (cracked_code == target_code) {
            printf("Code cracked! The code is: %d\n", cracked_code);
            break;
        }
        cracked_code++;
    }
 return 0;
}
