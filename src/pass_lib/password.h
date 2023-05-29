#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int random_int(int min, int max);
char random_symbol(char* symbols, int num_symbols);
void generate_password(
        char* password,
        int length,
        int use_uppercase,
        int use_numbers,
        int use_special);
