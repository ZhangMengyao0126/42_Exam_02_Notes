void ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

//char *ptr ; *ptr ; &c
//1. char *ptr:<br>
//(1) char: the type of variable that the pointer is pointing to, which means ptr holds the address of such variable.<br>
//(2) *: the sign of a pointer.<br>
//(3) ptr: the pointer's name.<br>

//2. ptr = &c, *ptr = c<br>
//(1) *: dereference sign, access the value at a given address.<br>
//(2) &: address-of sign, get the address of a variable.<br>
//(3) * and & are inverse operations.<br>