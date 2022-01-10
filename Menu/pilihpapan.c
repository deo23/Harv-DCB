//author	: Berliana Elfada

//Modul untuk menampilkan tampilan pilihan papan yang tersedia
//I.S	: Ditampilkan tampilan modul PilihLevel
//F.S	: Ditampilkan tampilan pilihan papan yang tersedia yaitu papan 5x5, 7x7, dan 9x9, serta pilihan ke menu utama

void pilihPapan(){
    int jenispapan;

    system("CLS");
    system("color 3");
    printf("\n\n\n\n\n\n\n\n\n\n");
    gotoxy(70,8);printf("                  PILIH PAPAN                    \n");
    gotoxy(70,9);printf("  ____________________________________________   \n");
    gotoxy(70,10);printf(" |   ______________________________    ____   | \n");
    gotoxy(70,11);printf(" |  |       _______________________   |    |  |   \n");
    gotoxy(70,12);printf(" |  |   |  |                       |  |    |  |\n");
    gotoxy(70,13);printf(" |  |   |  |    (1) Papan 5x5      |  |    |  |\n");
    gotoxy(70,14);printf(" |  |   |  |                       |  |    |  |\n");
    gotoxy(70,15);printf(" |  |   |  |    (2) Papan 7x7      |  |    |  |\n");
    gotoxy(70,16);printf(" |  |   |  |                       |  |    |  |\n");
    gotoxy(70,17);printf(" |  |   |  |    (3) Papan 9x9      |  |    |  |\n  ");
    gotoxy(70,18);printf(" |  |   |  |                       |__|    |  | \n");
    gotoxy(70,19);printf(" |  |   |  |_______________________________|  |\n");
    gotoxy(70,20);printf(" |  |   |_______________________________   ___| \n");
    gotoxy(70,21);printf(" |  |___________________________________|  |   \n");
    gotoxy(70,22);printf(" |_________________________________________| \n\n\n");
    gotoxy(77,25);printf("Masukkan Pilihan : ");
    scanf("%d", &jenispapan);

    switch(jenispapan){
        case 1:
            system("CLS");
            setup=setup*5;
			n=5;
			maingame();
            break;

        case 2:
            system("CLS");
            setup=setup*7;
			n=7;
			maingame();
            break;
        
        case 3:
            system("CLS");
            setup=setup*9;
			n=9;
			maingame();
            break;

        case 0:
            system("CLS");
            MenuUtama();
            break;
        
        default:
            pilihPapan();
            break;
    }
}
