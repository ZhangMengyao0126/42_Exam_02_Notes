#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *s1, char *s2)
{
    size_t i;

    i = 0;
    while (s2[i] != '\0' )
    {
        s1[i] = s2[i];
        i++; 
    }
    //Why can't I use s1[i++] = s2[i++]?
    //After the assignment happens, i is incremented twice—once for s1[i++] and once for s2[i++].
    s1[i] = '\0';
    return (s1);
//there's no error handling in strcpy;
}

/* int main()
{
    char s1[6] = "Hello";
    char s2[6] = "Hella";
    printf("%s",ft_strcpy(s1, s2));
}*/