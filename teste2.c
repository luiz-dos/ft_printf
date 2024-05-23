#include "libft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int                     a;
    int                     bola;

    ft_printf("\n Testing NULL as format \n");
    
    a = ft_printf(NULL);
    bola = printf(NULL);
    ft_printf("Bytes mylib_printf: %d\n", a);
    printf("Bytes stdio_printf: %d\n", bola);

    ft_printf("\n Character Tests \n");

    char c = 'k';
    a = ft_printf("mylib_printf [%-5c] [%5c] [%c]\n", c, c, c);
    bola = printf("stdio_printf [%-5c] [%5c] [%c]\n", c, c, c);
    ft_printf("Bytes mylib_printf: %d\n", a);
    printf("Bytes stdio_printf: %d\n", bola);

    ft_printf("\n String Tests \n");

    char *str = "Maciel";
    char *null_str = NULL;
    a = ft_printf("mylib_printf [%-10.3s] [%10s] [%s] [%.0s]\n", str, str, null_str, null_str);
    bola = printf("stdio_printf [%-10.3s] [%10s] [%s] [%.0s]\n", str, str, null_str, null_str);
    ft_printf("Bytes mylib_printf: %d\n", a);
    printf("Bytes stdio_printf: %d\n", bola);

    ft_printf("\n Pointer tests \n");

    void *ptr = str;
    void *null_ptr = NULL;
    a = ft_printf("mylib_printf [%p] [%10p] [%-10p]\n", ptr, null_ptr, null_ptr);
    bola = printf("stdio_printf [%p] [%10p] [%-10p]\n", ptr, null_ptr, null_ptr);
    ft_printf("Bytes mylib_printf: %d\n", a);
    printf("Bytes stdio_printf: %d\n", bola);

    ft_printf("\n Integer tests (decimal and integer) Negative \n");

    int num = -6657;
    a = ft_printf("mylib_printf [%+-10.5d] [%-10.5d] [%.5i] [%i]\n", num, 0, num, 0);
    bola = printf("stdio_printf [%+-10.5d] [%-10.5d] [%.5i] [%i]\n", num, 0, num, 0);
    ft_printf("Bytes mylib_printf: %d\n", a);
    printf("Bytes stdio_printf: %d\n", bola);

    ft_printf("\n Integer tests (decimal and integer) Positive \n");

    num = 346572;
    a = ft_printf("mylib_printf [%+-10.5d] [%-10.5d] [%.5i] [%i]\n", num, 0, num, 0);
    bola = printf("stdio_printf [%+-10.5d] [%-10.5d] [%.5i] [%i]\n", num, 0, num, 0);
    ft_printf("Bytes mylib_printf: %d\n", a);
    printf("Bytes stdio_printf: %d\n", bola);

    ft_printf("\n Unsigned integer tests \n");

    unsigned int unum = 855461;
    a = ft_printf("mylib_printf [%010u] [%-10u] [%.5u] [%u]\n", unum, 0, unum, 0);
    bola = printf("stdio_printf [%010u] [%-10u] [%.5u] [%u]\n", unum, 0, unum, 0);
    ft_printf("Bytes mylib_printf: %d\n", a);
    printf("Bytes stdio_printf: %d\n", bola);

    ft_printf("\n Lowercase Hex Tests \n");

    a = ft_printf("mylib_printf [%013x] [%-#10x] [%#.5x] [%#x]\n", UINT_MAX, unum, unum, 0);
    bola = printf("stdio_printf [%013x] [%-#10x] [%#.5x] [%#x]\n", UINT_MAX, unum, unum, 0);
    ft_printf("Bytes mylib_printf: %d\n", a);
    printf("Bytes stdio_printf: %d\n", bola);

    ft_printf("\n Uppercase Hex tests \n");

    a = ft_printf("mylib_printf [%013x] [%-#10X] [%#.5X] [%X]\n", UINT_MAX, unum, unum, 0);
    bola = printf("stdio_printf [%013x] [%-#10X] [%#.5X] [%X]\n", UINT_MAX, unum, unum, 0);
    ft_printf("Bytes mylib_printf: %d\n", a);
    printf("Bytes stdio_printf: %d\n", bola);

    ft_printf("\n Percentage Tests \n");

    a = ft_printf("mylib_printf [%%]\n");
    bola = printf("stdio_printf [%%]\n");
    ft_printf("Bytes mylib_printf: %d\n", a);
    printf("Bytes stdio_printf: %d\n", bola);

    ft_printf("\n Mixed test of the bonus part \n");

    char    *s = "";
    a = ft_printf("mylib_printf [%c] [%1s] [%-20p] [%-+20.10d] [%+20.10i] [%.0u] [%#20.5x] [%-#20.5X] [%9x] [%#15.12X]\n", 'L', s, &s, 1279, 2432, 6545, -765455, 765455, -7778455, 92876455);
    bola = printf("stdio_printf [%c] [%1s] [%-20p] [%-+20.10d] [%+20.10i] [%.0u] [%#20.5x] [%-#20.5X] [%9x] [%#15.12X]\n", 'L', s, &s, 1279, 2432, 6545, -765455, 765455, -7778455, 92876455);

    ft_printf("Bytes mylib_printf: %d\n", a);
    printf("Bytes stdio_printf: %d\n", bola);
    
    ft_printf("\n Mixed test of the mandatory part \n");

    a = ft_printf("mylib_printf [%c] [%s] [%p] [%d] [%i] [%u] [%x] [%X]\n", 'L', s, &s, 1279, 2432, 6545, -765455, 765455);
    bola = printf("stdio_printf [%c] [%s] [%p] [%d] [%i] [%u] [%x] [%X]\n", 'L', s, &s, 1279, 2432, 6545, -765455, 765455);
    
    ft_printf("Bytes mylib_printf: %d\n", a);
    printf("Bytes stdio_printf: %d\n", bola);

    return (0);
}
