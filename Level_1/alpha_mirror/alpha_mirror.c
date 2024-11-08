#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    size_t i;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
                argv[1][i] = 'a' + 'z' - argv[1][i];
            //The formula relies on the fact that the alphabet is a symmetrical range from 'A' to 'Z'.
            //By adding 'A' and 'Z' (the first and last letters of the alphabet) and then subtracting the current letter,
            //we get the letter that is symmetrically  opposite to it in the alphabet.
            else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                argv[1][i] = 'A' + 'Z' - argv[1][i];
            write(1, argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}