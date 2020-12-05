#include <stdio.h>
#include <stdlib.h>

// ANSI Colors for Console.
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_RESET   "\x1b[0m"

// 1 Byte Types.
typedef unsigned char ui8;
typedef signed char i8;

// 2 Byte Types.
typedef unsigned short int ui16;
typedef short int i16;

// 4 Byte Types.
typedef unsigned long int ui32;
typedef long int i32;

typedef float fp32;

// 8 Byte Types.
typedef unsigned long long int ui64;
typedef long long int i64;

typedef double fp64;

struct machine {
    ui8 *mem_start;
    ui8 *stack_start;
    ui8 *stack_top;
    ui8 *heap_start;
    ui8 *mem_end;
};

// Print out an error message then exit.
void throw_error(char *msg);

int main() {
    throw_error("Something went wrong.");
    
    return 0;
}

void throw_error(char *msg) {
    printf(ANSI_COLOR_RED "error" ANSI_COLOR_RESET ": %s\n", msg);
    exit(EXIT_FAILURE);
}