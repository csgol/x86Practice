#include <stdio.h>

extern char my_asm();
// Get input from keyboard
int main(int argc, char** argv)
{
    char c = my_asm();
    printf("%c\n",c);
    return 0;
}