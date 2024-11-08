#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    size_t i;
    size_t n;

    i = 0;
    if (argc == 2)
    {
        while(argv[1][i])
        {
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            //Or use argv[1][i] >= '65'
                n = argv[1][i] - 'A' + 1;
            else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                n = argv[1][i] - 'a' + 1;
            else
                n = 1;
            while(n--)
            //while(n--) is equivalent to while(n-- > 0).
            //And for while(n--), the condition is checked first, and then n is decremented after the check.
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}

//cat -e: 
//Concatenate -end, cat is commonly used to display the contents of files, and e is for the -e option is a shortcut for --show-ends.
//This option isn't formally "named" as a command by itself but is rather a flag to make end-of-line characters visible, 
//represented by the $ symbol.
//Thus, the full command is simply: cat -e filename.txt