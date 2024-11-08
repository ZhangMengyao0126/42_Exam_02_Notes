#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
//For atoi

int main(int argc, char **argv)
{
    int n1;
    int n2;
    if(argc == 4)
    {
        n1 = atoi(argv[1]);
        n2 = atoi(argv[3]);
        if(argv[2][0] == '+')
            printf("%d", (n1 + n2));
        else if(argv[2][0] == '-')
            printf("%d", (n1 - n2));
        else if(argv[2][0] == '*')
            printf("%d", (n1 * n2));
        else if(argv[2][0] == '/')
            printf("%d", (n1 + n2));
        else if(argv[2][0] == '%')
            printf("%d", (n1 % n2));
    }
    write(1, "\n", 1);
    return (0);
}