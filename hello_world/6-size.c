#include <stdio.h>
int main (void) {
// Use %zu for size_t if your compiler supports it.
printf("sizeof(int)       = %d\n", sizeof(4));
printf("sizeof(float)     = %d\n", sizeof(4));
printf("sizeof(double)    = %d\n", sizeof(8));
printf("sizeof(char)      = %d\n", sizeof(1));
printf("sizeof(167)       = %d\n", sizeof(4));
printf("sizeof(3.1415926) = %d\n", sizeof(8));
printf("sizeof('$')       = %d\n", sizeof(4));
return (0);
}
