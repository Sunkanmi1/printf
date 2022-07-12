#ifndef TEST_MAIN_H
#define TEST_MAIN_#ifndef TEST_MAIN_H
#define TEST_MAIN_H


#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct convert - defines a structure for symbols and functions
*
* @sym: The operator
* @f: The function associated
*/
struct convert
{
        char *sym;
        int (*f)(va_list);
};
typedef struct convert conver_t;

/*Main functions*/
int print_STR(va_list arg);
int print_str(va_list arg);
int print_unsigned(va_list arg)

#endif
~        H


#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct convert - defines a structure for symbols and functions
*
* @sym: The operator
* @f: The function associated
*/
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

/*Main functions*/
int print_STR(va_list arg);
int print_str(va_list arg);
int print_unsigned(va_list arg)

#endif
