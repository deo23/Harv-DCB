//author	: Berliana Elfada

//Modul untuk menampilkan tampilan pilihan papan yang tersedia
//I.S	: Ditampilkan tampilan modul PilihLevel
//F.S	: Ditampilkan tampilan pilihan papan yang tersedia yaitu papan 5x5, 7x7, dan 9x9, serta pilihan ke menu utama

void pilihPapan(){
    int jenispapan;

    system("CLS");
	printf("*	***			***	  *\n");
	printf("*	***			***	  *\n\n");
	printf("*		***	***		  *\n");
	printf("*		***	***		  *\n\n");
	printf("*		***	***		  *\n");
	printf("*		***	***		  *\n\n");
	printf("*	***			***	  *\n");
	printf("*	***			***	  *\n\n");
    printf("Pilih Papan\n");
    printf("(1) Papan 5x5\n");
    printf("(2) Papan 7x7\n");
    printf("(3) Papan 9x9\n");
    printf("(0) Menu Utama\n");
    printf("Masukkan Pilihan :\n");
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