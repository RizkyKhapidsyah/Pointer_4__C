#include <stdio.h>
#include <conio.h>

/* Created by Rizky Khapidsyah */

int main() {
	int* p, a = 25, b;

	p = &a;
	b = *p;

	printf("Nilai a  = %d di alamat %p\n", a, p);
	printf("Nilai b  = %d di alamat %p\n", b, p);

	_getch();
	return 0;
}

