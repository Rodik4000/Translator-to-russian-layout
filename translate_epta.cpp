#include <cwchar>
#include<locale.h>
#include<iostream>


#include <string>
#include <fstream>


#include<stdio.h>

void print() {
	printf("1: Англ - Рус |  2: Рус - Англ  |  0: Выход\n");
	
}

int main() {
	setlocale(LC_ALL, "Russian");

	/*wchar_t alph1[100] = L"`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./"
		L"~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";*/
	/*wchar_t alph2[100] = L"ё1234567890-=йцукенгшщзхъфывапролджэячсмитьбю."
		L"Ё!\"№;%:?*()_+ЙЦУКЕНГШЩЗХЪ/ФЫВАПРОЛДЖЭЯЧСМИТЬБЮ,";*/

	char alph1[100] = "`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?     ";
	char alph2[100] = "ё1234567890-=йцукенгшщзхъфывапролджэячсмитьбю.Ё!\"№;%:?*()_+ЙЦУКЕНГШЩЗХЪ/ФЫВАПРОЛДЖЭЯЧСМИТЬБЮ,     ";
	
	char c = getchar();//нач считывание
	while (c != '\n' && c != EOF) {
		for (int i = 0; i < 95; i++) {
			if (alph1[i] == c) {
				printf("%c", alph2[i]);
				break;
			}
		}
		c = getchar();
	}
	printf("\n");
	while (getchar() != '\n');
	printf("А дальше не работает\n");
	system("pause");
	exit(0);
	print();
	int isCont, ok;

	//варики
	while (true) {
		while (scanf_s("%d", &isCont) == 0) {
			ok = 0;
			system("cls");
			printf("Для кого написал, 1, 2, 0???\n");
			while (getchar() != '\n');
			print();
			ok = 1;
		}
		while (getchar() != '\n');
		ok = 1;
		switch (isCont)				//тупо начал писать с гпт
		{
		case 0: {
			exit(0);
		}
		case 1: {
			c = getchar();//нач считывание
			while (c != '\n' && c != EOF) {
				for (int i = 0; i < 95; i++) {
					if (alph1[i] == c) {
						printf("%c", alph2[i]);
						break;
					}
				} 
				c = getchar();
			}
			printf("\n");
			break;
		}
		case 2: {
			c = getwchar();//нач считывание
			while (c != '\n' && c != EOF) {
				for (int i = 0; i < 95; i++) {
					if (alph2[i] == c) {
						printf("%c", alph1[i]);
						break;
					}
				}
				c = getwchar();
			}
			printf("\n");
			break;
		}
		default:
			ok = 0;
			system("cls");
			printf("Для кого написал, 1, 2, 0???\n");
			print();
			break;
		}
		if (ok) {
			system("pause");
			system("cls");
			print();
		}
	}
		
		
}



//`1234567890-=qwertyuiop[]\asdfghjkl;'zxcvbnm,./
//
//~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:"ZXCVBNM<>?
//
//ё1234567890-=йцукенгшщзхъ\фывапролджэячсмитьбю.
//
//Ё!"№;%:?*()_+ЙЦУКЕНГШЩЗХЪ/ФЫВАПРОЛДЖЭЯЧСМИТЬБЮ,