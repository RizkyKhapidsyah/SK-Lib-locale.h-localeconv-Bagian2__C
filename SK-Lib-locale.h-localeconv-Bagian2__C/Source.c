/*	Source by GeeksForGeeks
	Modified For Learn by Rizky Khapidsyah 
	I.D.E : VS 2019
*/

#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main() {
	setlocale(LC_MONETARY, "en_US.utf8");
	struct lconv* lc = localeconv();

	printf("Simbol Mata Uang adalah : %s ", lc->currency_symbol);

	_getch();
	return 0;
}
