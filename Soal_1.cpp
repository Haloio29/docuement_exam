#include <stdio.h>
#include <conio.h>

void main ()
{
	int gaji_tunjangan, gaji_pokok, gaji_bersih;

	clrscr();

	printf ("--------------------------------\n");
	printf ("PROGRAM MENGHITUNG GAJI KARYAWAN\n");
	printf ("--------------------------------\n\n");
	printf ("Nama Kelompok :\n");
	printf ("1. Wilbert (NIM 223303030402)\n");
	printf ("2. Gilbert (NIM 223303030403)\n");
	printf ("3. Rikki Josua Tampubolon (NIM 223303030423)\n");
	printf ("4. Aurelio Lucio Lie (NIM 223303030427)\n");
	printf ("5. Justin Collins (NIM 223303030429)\n\n");

	printf ("Masukan gaji pokok anda :: ");
    scanf ("%i", &gaji_pokok);

    gaji_tunjangan = gaji_pokok + (gaji_pokok * 20/100);
    gaji_bersih = gaji_tunjangan - (gaji_tunjangan * 15/100);

    printf ("Gaji bersih \t\t:: %.2f", gaji_bersih);

	getch();
}