#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int length;
    printf("Input: ");
    scanf("%d", &length);// зададим длину пароля

    srand(time(0));
    char password[length+1];

    for (int i = 0; i < length; i++) {
        int randomNum = rand() % 62; // генерируем случайное число в диапазоне от 0 до 61 (включительно) 
        if (randomNum < 26)
            password[i] = 'A' + randomNum; // случайный символ от 'A' до 'Z'
        else if (randomNum < 52)
            password[i] = 'a' + (randomNum - 26); // случайный символ от 'a' до 'z'
        else
            password[i] = '0' + (randomNum - 52); // случайный символ от '0' до '9'
    }


    printf("Password: %s\n", password);

    return 0;
}
