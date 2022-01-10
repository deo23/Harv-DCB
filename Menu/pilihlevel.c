//author	: Berliana Elfada

//Modul untuk menampilkan pilihan level yang tersedia
//I.S	: Ditampilkan tampilan layar jumlah pemain
//F.S	: Ditampilkan tampilan menu yang menampilkan level yang tersedia

void pilihLevel(){

    int level;

    system("CLS");
	
    printf("Pilih Level\n");
    printf("(1) Mudah\n");
    printf("(2) Menengah\n");
    printf("(3) Sulit\n");
    printf("(0) Menu Utama\n");
    printf("Masukkan Pilihan :\n");
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
