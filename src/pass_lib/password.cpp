
#include <pass_lib/password.h>

char random_symbol(char* symbols, int num_symbols)
{
    int index = rand() % num_symbols;
    return symbols[index];
}
void generate_password(
        char* password,
        int length,
        int use_uppercase,
        int use_numbers,
        int use_special)
{
    char symbols[96];
    int num_symbols = 0;
    for (char c = 'a'; c <= 'z'; c++) {
        symbols[num_symbols++] = c;
    }
    if (use_uppercase) {
        for (char c = 'A'; c <= 'Z'; c++) {
            symbols[num_symbols++] = c;
        }
    }
    if (use_numbers) {
        for (char c = '0'; c <= '9'; c++) {
            symbols[num_symbols++] = c;
        }
    }

    if (use_special) {
        char special_symbols[] = "!@#$%^&*()_+-=";
        for (int i = 0; i < sizeof(special_symbols) - 1; i++) {
            symbols[num_symbols++] = special_symbols[i];
        }
    }
    symbols[num_symbols] = '\0';

    for (int i = 0; i < length; i++) {
        password[i] = random_symbol(symbols, num_symbols);
    }
    password[length] = '\0';
}
