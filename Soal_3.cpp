#include <stdio.h>
#include <conio.h>

void main ()
{
	int i, N;

	clrscr();

	printf ("------------------------------------\n");
	printf ("PROGRAM MEMBUAT LIRIK LAGU ANAK AYAM\n");
	printf ("------------------------------------\n\n");
	printf ("Nama Kelompok :\n");
	printf ("1. Wilbert (NIM 223303030402)\n");
	printf ("2. Gilbert (NIM 223303030403)\n");
	printf ("3. Rikki Josua Tampubolon (NIM 223303030423)\n");
	printf ("4. Aurelio Lucio Lie (NIM 223303030427)\n");
	printf ("5. Justin Collins (NIM 223303030429)\n\n");

	printf ("Masukan banyak anak ayam   :: ");
	scanf ("%i", &N);
    printf ("Judul lagu \t\t   :: Anak Ayam Turun %i\n\n", N);
    printf ("Lirik :\n");

    // Looping Start
    for (i=N ; i>1 ; i--)
    {
        printf ("Anak Ayam Turun %i, Mati Satu Tinggal %i\n", i, i-1);
    }
        printf ("Anak Ayam Turun 1, Mati Satu Tinggal Induknya.");

	getch();
}