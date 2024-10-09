#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main() {
 int code;
 srand(time(0));
 code = (rand() % 9000) + 1000;
 printf("Generated Code: %d\n", code);
 return 0;
}
