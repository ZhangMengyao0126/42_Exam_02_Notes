#include <stdio.h>

int main(int argc, char **argv)
{
    size_t i;
    size_t n;

    i = 0;
    if (argc == 2)
    {
        while(argv[1][i])
        {
            if (argv[1][i] >= 65 && argv[1][i] <= 90)
            {
                n = argv[1][i] - 'A';
                while (n > 0)
                {
                    write(1, argv[1][i], 1);
                    n++;
                }
                i++;
            }
            else if (argv[1][i] >= 97 && argv[1][i] <= 122)
            {
                n = argv[1][i] - 'a';
                while (n > 0)
                {
                    write(1, argv[1][i], 1);
                    n++;
                }
                i++;
            }
        }
    write(1, "\n", 1);
    }
}