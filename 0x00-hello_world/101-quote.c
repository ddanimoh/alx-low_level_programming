#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void) 
{
    char str[] = "exactly and that piece of art is useful\n";
    write(2, str, sizeof(str) - 1);
    return 1;
}
