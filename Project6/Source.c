#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>


void main()
{
    setlocale(LC_ALL, "RUS");

    int years, ostatok4, ostatok100, ostatok400;

    printf("������� ���:");
    scanf("%d", &years);
    printf("����� %d ���", years);

    ostatok4 = years % 4;
    ostatok100 = years % 100;
    ostatok400 = years % 400;

    if ((ostatok4 == 0 && ostatok100 != 0) || ostatok400 == 0)
    {
        printf("��� %d ����������", years);
    }
    else
    {
        printf("��� %d �� ����������", years);
    }
}