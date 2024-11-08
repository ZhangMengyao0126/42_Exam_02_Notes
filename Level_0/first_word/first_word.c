#include <stdio.h>
//standard input output: includes size_t
#include <unistd.h>
//unix standard: includes write.

int main(int argc, char **argv)
{
    size_t i;

    i = 0;
    if(argc == 2)
    while(argv[1][i] == 9 || argv[1][i] == 32)
        i++;
    while(argv[1][i] != 9 && argv[1][i] != 32 && argv[1][i])
    //The difference between argv[1] and argv[1][i]:ls
    //If argv[1] exists (i.e., if argc >= 2), 
    //then argv[1] will always hold a valid pointer to a string, even if that string is empty.
    {
        write(1, &argv[1][i], 1);
        //ssize_t write (int fd, const void *buf, size_t n), the second argument should be a pointer.
        i++;   
    }
    write(1, "\n", 1);
    return (0);
}