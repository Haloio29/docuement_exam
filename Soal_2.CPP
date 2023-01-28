#include <stdio.h>
#include <conio.h>

void main ()
{
	int jam;
	long int upah;

	clrscr();

	printf ("---------------------------------------\n");
	printf ("PROGRAM MENGHITUNG UPAH LEMBUR KARYAWAN\n");
	printf ("---------------------------------------\n\n");
	printf ("Nama Kelompok :\n");
	printf ("1. Wilbert (NIM 223303030402)\n");
	printf ("2. Gilbert (NIM 223303030403)\n");
	printf ("3. Rikki Josua Tampubolon (NIM 223303030423)\n");
	printf ("4. Aurelio Lucio Lie (NIM 223303030427)\n");
	printf ("5. Justin Collins (NIM 223303030429)\n\n");

	printf ("Masukan jumlah jam kerja anda   :: ");
	scanf ("%i", &jam);

	// Percabangan Start
	if (jam > 48)
		upah = 960 * (30 * ((jam) - 48));

	else
		upah = 20 * jam;

	printf ("Upah \t\t\t\t:: %i000", upah);

	getch();
}