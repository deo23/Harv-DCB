//author	: Berliana Elfada

//Modul untuk menampilkan pilihan level yang tersedia
//I.S	: Ditampilkan tampilan layar jumlah pemain
//F.S	: Ditampilkan tampilan menu yang menampilkan level yang tersedia

void pilihLevel(){

    int level;

    system("CLS");
    system("color 5");
    printf("\n\n\n\n\n\n\n\n\n\n");
    gotoxy(70,12);printf("  _   _   _   _   _   _   _   _   _ \n ");
    gotoxy(70,13);printf(" | |_| |_| |_| |_| |_| |_| |_| |_| | \n ");
    gotoxy(70,14);printf(" |                                 | \n");
    gotoxy(70,15);printf(" |           Pilih Level           |  \n");
    gotoxy(70,16);printf(" |         (1) Mudah               |   \n");
    gotoxy(70,17);printf(" |         (2) Menengah            |   \n");
    gotoxy(70,18);printf(" |         (3) Sulit               |   \n");
    gotoxy(70,19);printf(" |         (0) Menu Utama          |   \n");
    gotoxy(70,20);printf(" |                                 |  \n");
    gotoxy(70,21);printf(" |  _   _   _   _   _   _   _   _  | \n");
    gotoxy(70,22);printf(" |_| |_| |_| |_| |_| |_| |_| |_| |_|  \n");
    gotoxy(73,24);printf(" Masukkan Pilihan : ");
    scanf("%d", &level);

    switch(level){
        case 1:
            system("CLS");
            setup = setup*1;
            pilihPapan();
            break;
        
        case 2:
            system("CLS");
            setup = setup*2;
            pilihPapan();
            break;
        
        case 3:
            system("CLS");
            setup=setup*3;
            pilihPapan();
            break;
        
        case 0:
            system("CLS");
            MenuUtama();
        
        default:
            pilihLevel();
            break;
    }
}
