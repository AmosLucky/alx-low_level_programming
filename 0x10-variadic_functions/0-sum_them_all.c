#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - return numbers of param passed
 * @n: number of params
 * Description: return number of param passed
 * return: 0 or n
 */

int sum_them_all(const unsigned int n, ...)
{
    if (n == 0)
    {
        return (0);
    }
    else
    {
        return (n);
    }
    
}
