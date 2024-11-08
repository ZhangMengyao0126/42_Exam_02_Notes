#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    size_t i;
    size_t n;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            if ((argv[1][i] >= 'A' && argv[1][i] <= 'M') || (argv[1][i] >= 'a' && argv[1][i] <= 'm'))
                argv[1][i] = argv[1][i] + 13;
                //Characters in C are really just integers that correspond to character codes (like ASCII), 
                //and you can perform arithmetic on them, just like you would with regular integers.
            else if ((argv[1][i] >= 'N' && argv[1][i] <= 'Z') || (argv[1][i] >= 'n' && argv[1][i] <= 'z'))
                argv[1][i] = argv[1][i] - 13;
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}