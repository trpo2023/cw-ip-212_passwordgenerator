#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int length;
    printf("Input: ");
    scanf("%d", &length);// ������� ����� ������

    srand(time(0));
    char password[length+1];

    for (int i = 0; i < length; i++) {
        int randomNum = rand() % 62; // ���������� ��������� ����� � ��������� �� 0 �� 61 (������������) 
        if (randomNum < 26)
            password[i] = 'A' + randomNum; // ��������� ������ �� 'A' �� 'Z'
        else if (randomNum < 52)
            password[i] = 'a' + (randomNum - 26); // ��������� ������ �� 'a' �� 'z'
        else
            password[i] = '0' + (randomNum - 52); // ��������� ������ �� '0' �� '9'
    }


    printf("Password: %s\n", password);

    return 0;
}
