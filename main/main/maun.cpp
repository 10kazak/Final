#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#define max 100

int main()
{
setlocale(LC_ALL,"Russian");
char simvol;
char str[max];
float b1, b2;
int a5, a2, a3;

printf("������� ������: ");
scanf("%c", &simvol);
fflush(stdin);

printf("������� ���� ���: ");
fgets(str, max, stdin);

printf("������� 2 �����: ");
scanf("%d %d", &a1, &a2);

printf ("������� 2 ����� c ��������� ������: ");
scanf("%f %f", &b1, &b2);

printf("������� ����� �����: ");
scanf("%d", &a3);

printf(" %d %c \n", simvol,simvol);

printf ("���� �����: %s %d \n", str, strlen(str));



printf("%d %d \n", a1, a2);
printf("%x %x \n", a1, a2);
printf("|%-8d %d| \n ", a1, a2);
printf("|%d %d| \n", a1, a2);





printf("%f %f \n", b1, b2);
printf("%1.3e %1.3e \n", b1, b2);



printf("%u \t %o \t %x", a3, a3, a3);

getchar();
getchar();
return 0;
}