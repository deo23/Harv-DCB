#include <stdio.h>

//author: Berliana Elfada

//Modul untuk menentukan pemain bermain dengan komputer apa dengan pemain lagi
//I.S : Ditampilkan tampilan pemilihan pemain PvP atau PvC
//F.S : Ditampilkan tampilan menu yang menampilkan pemain yang tersedia

int jumlahPemain(){
    int pemain;
	system("CLS");
	printf("\n\n");
    printf("  ***                    ***\n");
    printf("   ***                  ***\n");
    printf("    ***                ***\n");
    printf("     ***              ***\n");
    printf("      ***            ***   **********\n");
    printf("       ***          ***    **\n");
    printf("        ***        ***     **\n");
    printf("         ***      ***      **********\n");
    printf("          ***    ***               **\n");
    printf("           ***  ***                **\n");
    printf("            ******         **********\n\n");
	printf("-----------------------------------------------\n\n");
    printf("(1) Player vs Computer\n");
    printf("(2) Player vs Player\n");
    printf("(0) Menu Utama\n");
    printf("Silakan pilih Mode Permainan :\n ");
    scanf("%d", &pemain);

    switch (pemain)
    {
    case 1:
        system("CLS");
        players=1;
        setup=setup*1;
        pilihLevel();
        break;

    case 2:
        system("CLS");
        players=2;
        setup=setup*4;
        pilihPapan();
        break;
        
    case 0:
        system("CLS");
        MenuUtama();
        break;

    default:
        jumlahPemain();
        break;
    }
}