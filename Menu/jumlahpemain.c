#include <stdio.h>

//author: Berliana Elfada

//Modul untuk menentukan pemain bermain dengan komputer apa dengan pemain lagi
//I.S : Ditampilkan tampilan pemilihan pemain PvP atau PvC
//F.S : Ditampilkan tampilan menu yang menampilkan pemain yang tersedia

int jumlahPemain(){
    int pemain;
    system("CLS");
    system("color 1");
    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t  ***                  ***\n");
    printf("\t\t\t\t\t\t\t\t   ***                ***\n");
    printf("\t\t\t\t\t\t\t\t    ***              ***\n");
    printf("\t\t\t\t\t\t\t\t     ***            ***   **********\n");
    printf("\t\t\t\t\t\t\t\t      ***          ***    **\n");
    printf("\t\t\t\t\t\t\t\t       ***        ***     **\n");
    printf("\t\t\t\t\t\t\t\t        ***      ***      **********\n");
    printf("\t\t\t\t\t\t\t\t         ***    ***               **\n");
    printf("\t\t\t\t\t\t\t\t          ***  ***                **\n");
    printf("\t\t\t\t\t\t\t\t           ******         **********\n\n");
    printf("\t\t\t\t\t\t\t\t --------------------------------\n");
    printf("\t\t\t\t\t\t\t\t | (1) Player vs Computer	|\n");
    printf("\t\t\t\t\t\t\t\t | (2) Player vs Player		|\n");
    printf("\t\t\t\t\t\t\t\t | (0) Menu Utama		|	\n");
    printf("\t\t\t\t\t\t\t\t --------------------------------\n\n");
    printf("\t\t\t\t\t\t\t\tSilakan pilih Mode Permainan :  ");
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
