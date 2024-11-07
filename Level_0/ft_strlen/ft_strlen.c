#include <stddef.h>
#include <stdio.h>
//Standard definations header
//Null: A macro for representing a null pointer.

int ft_strlen(char *str)
{
    size_t i;

    i = 0;
    if (!str)
        return (0);
    //Since the return value is int, we can not return NULL here.
    while (str[i])
        i++;
    return (int)(i);
    //Since the return value is int.
        
}

/*int main()
{
    char *str = "HappyHappyHappy!";
    printf("%d", ft_strlen(str));
}*/