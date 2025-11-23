#include <cwchar>
#include<locale.h>
#include<iostream>


#include <string>
#include <fstream>


#include<stdio.h>

void print() {
	printf("1: Àíãë - Ðóñ |  2: Ðóñ - Àíãë  |  0: Âûõîä\n");
	
}

int main() {
	setlocale(LC_ALL, "Russian");

	/*wchar_t alph1[100] = L"`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./"
		L"~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";*/
	/*wchar_t alph2[100] = L"¸1234567890-=éöóêåíãøùçõúôûâàïðîëäæýÿ÷ñìèòüáþ."
		L"¨!\"¹;%:?*()_+ÉÖÓÊÅÍÃØÙÇÕÚ/ÔÛÂÀÏÐÎËÄÆÝß×ÑÌÈÒÜÁÞ,";*/

	char alph1[100] = "`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?     ";
	char alph2[100] = "¸1234567890-=éöóêåíãøùçõúôûâàïðîëäæýÿ÷ñìèòüáþ.¨!\"¹;%:?*()_+ÉÖÓÊÅÍÃØÙÇÕÚ/ÔÛÂÀÏÐÎËÄÆÝß×ÑÌÈÒÜÁÞ,     ";
	
	char c = getchar();//íà÷ ñ÷èòûâàíèå
	while (c != '\n' && c != EOF) {
		for (int i = 0; i < 95; i++) {
			if (alph1[i] == c) {
				printf("%c", alph2[i]);
				break;
			}
		}
		c = getchar();
	}
	printf("\n\n");
	system("pause");
	return 0;
	print();
	int isCont, ok;

	//âàðèêè
	while (true) {
		while (scanf_s("%d", &isCont) == 0) {
			ok = 0;
			system("cls");
			printf("Äëÿ êîãî íàïèñàë, 1, 2, 0???\n");
			while (getchar() != '\n');
			print();
			ok = 1;
		}
		while (getchar() != '\n');
		ok = 1;
		switch (isCont)				//òóïî íà÷àë ïèñàòü ñ ãïò
		{
		case 0: {
			exit(0);
		}
		case 1: {
			c = getchar();//íà÷ ñ÷èòûâàíèå
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
			c = getwchar();//íà÷ ñ÷èòûâàíèå
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
			printf("Äëÿ êîãî íàïèñàë, 1, 2, 0???\n");
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
//¸1234567890-=éöóêåíãøùçõú\ôûâàïðîëäæýÿ÷ñìèòüáþ.
//

//¨!"¹;%:?*()_+ÉÖÓÊÅÍÃØÙÇÕÚ/ÔÛÂÀÏÐÎËÄÆÝß×ÑÌÈÒÜÁÞ,
