#include <unistd.h>

void write_number(int number)
{
    char *str;

    str = "0123456789";
    //Why not char str[10] = "0123456789";
    //char str[10] = "0123456789"; creates a local array of 10 characters every time the function is called,
    //which could lead to additional memory usage on the stack, especially with recursive calls.
    if (number > 9)
    {
        write_number(number / 10);
    }
    write(1, &str[number % 10], 1);
}


/*int main ()
{
    int number;

    number = 1;
    while(number < 101)
    {
        if(number % 15 == 0)
            write(1, "fizzbuzz", 8);
        else if(number % 3 == 0)
            write(1, "fizz", 4);
        else if(number % 5 == 0)
            write(1, "buzz", 4);
        else
            write_number(number);
        write(1, "\n", 1);
        number++;
    }
    return (0);
}*/