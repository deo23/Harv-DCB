//author	: Berliana Elfada

//Modul untuk menampilkan mneu utama dalam permainan
//I.S: Ditampilkan tampilan layar sebelum modul MenuUtama
//F.S: Ditampilkan tampilan menu utama yang menampilkan pilihan untuk mulai permainan, Cara dan Aturan bermain, skor tertinggi, credits, dan keluar

void MenuUtama(){
    int menu;
    system("CLS");
    printf("\n\n");
	printf("-----------------------------------------------\n");
    printf("(1) Mulai Permainan\n");
    printf("(2) Cara & Aturan Bermain\n");
    printf("(3) Skor Tertinggi\n");
    printf("(4) Credits\n");
    printf("(0) Keluar\n");
    printf("Masukkan Pilihan :\n");
    scanf("%d", &menu);

    switch(menu){
        case 1:
            system("CLS");
            jumlahPemain();
            break;
        
        case 2:
            system("CLS");
			CaraBermain();
            break;
        
        case 3:
            system("CLS");
            showScore();
            break;
        
        case 4:
            system("CLS");
            break;
        
        case 0:
            
            break;
		
		default:
			MenuUtama();
			break;
    }
}