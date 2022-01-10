#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>

/* VARIABEL GLOBAL */
char papan[9][9]; //Variabel global untuk Papan permainan
int Player1, Player2, Computer; //Variabel global untuk menyimpan perolehan sos
int players; //Variabel global untuk menyimpan jumlah pemain yang bermain
int n; //Variabel global untuk menyimpan ukuran papan permainan
int setup=1; //Variabel global untuk menentukan jumlah pemain, kecerdasan komputer, dan papan yang akan dipanggil 

struct SaveScore{
		char NamaPemain[50];
		int skor;
	}; 

/* DEKLARASI MODUL */
////////////////* Main Menu *////////////////

void MenuUtama();
//author	: Berliana Elfada

//Modul untuk menampilkan menu utama dalam permainan
//I.S: Ditampilkan tampilan layar sebelum modul MenuUtama
//F.S: Ditampilkan tampilan menu utama yang menampilkan pilihan untuk mulai permainan, Cara dan Aturan bermain, skor tertinggi, credits, dan keluar

void CaraBermain();
//Modul untuk menampilkan cara bermain
//Author : Cintia Ningsih
//I.S    : Cara bermain dan aturan dalam permainan belum di tampilkan
//F.S    : Cara bermain dan aturan dalam permainan sudah ditampilkan

void Credits();
//author	: Irsyad Muhammad

//Modul untuk menampilkan tampilan credits permainan
//I.S	: Ditampilkan tampilan sebelum tampilan about us
//F.S	: Ditampilkan tampilan about us di layar


void jumlahPemain();
//author: Berliana Elfada

//Modul untuk menentukan pemain bermain dengan komputer apa dengan pemain lagi
//I.S : Ditampilkan tampilan pemilihan pemain PvP atau PvC
//F.S : Ditampilkan tampilan menu yang menampilkan pemain yang tersedia

void pilihLevel();
//author	: Berliana Elfada

//Modul untuk menampilkan pilihan level yang tersedia
//I.S	: Ditampilkan tampilan layar jumlah pemain
//F.S	: Ditampilkan tampilan menu yang menampilkan level yang tersedia

void pilihPapan();
//author	: Berliana Elfada

//Modul untuk menampilkan tampilan pilihan papan yang tersedia
//I.S	: Ditampilkan tampilan modul PilihLevel
//F.S	: Ditampilkan tampilan pilihan papan yang tersedia yaitu papan 5x5, 7x7, dan 9x9, serta pilihan ke menu utama

////////////////* Modul Memulai Permainan *////////////////

void maingame();
/*
Modul untuk memulai permainan berdasarkan pilihan mode permainan, tingkat kesulitan, dan jenis Papan
Author : Muhammad Deo Audha Rizki
I.S : Tampilan menu pilih Papan
F.S : Tampilan awal papan permainan
*/

////////////////* Modul Pergerakan Player *////////////////

void LangkahPemain5(int player);
//Modul ini untuk  menerima input pemain pada papan 5x5, jika player tidak menginput dalam waktu 10 detik maka input akan diacak
//Author : Cintia Ningsih
//int player : parameter input bertipe integer dengan passing paramter passing by value
//int player : berfungsi untuk menunjukkan jenis player yang akan melakukan input
//I.S        : Simbol yang di inputkan dari permain belum tampil pada papan permainan
//F.S        : Simbol yang di inputkan dari permain sudah tampil pada papan permainan

void LangkahPemain7(int player);
/*
Author : Muhammad Deo Audha Rizki
    
Modul untuk menerima input pemain pada papan 7x7, jika player tidak menginput dalam waktu 10 detik
maka input akan diacak
int player : parameter input bertipe integer dengan passing paramter passing by value
int player : berfungsi untuk menunjukkan jenis player yang akan melakukan input
I.S : Papan belum menampilkan input simbol dari player
F.S : Papan menampilkan input simbol dari player
*/

void LangkahPemain9(int player);
/*
Author : Muhammad Deo Audha Rizki
    
Modul untuk menerima input pemain pada papan 9x9, jika player tidak menginput dalam waktu 10 detik
maka input akan diacak
int player : parameter input bertipe integer dengan passing paramter passing by value
int player : berfungsi untuk menunjukkan jenis player yang akan melakukan input
I.S : Papan belum menampilkan input simbol dari player
F.S : Papan menampilkan input simbol dari player
*/

////////////////* Modul Player vs Player *////////////////

void duaPemain5();
//Modul ini untuk menjalankan permainan dengan jumlah player sebanyak 2, dan menjalankan permainan secara bergiliran
//Author : Cintia Ningsih
//I.S    : Ditampilkan tampilan layar modul pilihpapan
//F.S    : Ditampilkan tampilan permainan player vs player dengan papan 5x5

void duaPemain7();

/*
Author : Muhammad Deo Audha Rizki
    
Modul untuk memulai permainan Player vs Player dengan papan 7x7
    
I.S : Ditampilkan tampilan layar pilih papan
F.S : Ditampilkan tampilan permainan Player vs Player dengan papan 7x7  
*/

void duaPemain9();

/*
Author : Muhammad Deo Audha Rizki
    
Modul untuk memulai permainan Player vs Player dengan papan 7x7
    
I.S : Ditampilkan tampilan layar pilih papan
F.S : Ditampilkan tampilan permainan Player vs Player dengan papan 7x7  
*/

////////////////* Modul Tingkat Kesulitan *////////////////

void Mudah5();
//Modul ini untuk menentukan tingkat kesulitan yang mudah pada papan 5x5
//Author : Cintia Ningsih
//I.S    : Tampilan permainan dengan tingkat kesulitan mudah pada papan 5x5 belum ditampilkan 
//F.S    : Tampilan permainan dengan tingkat kesulitan mudah pada papan 5x5 sudah ditampilkan

void Menengah5();
//Modul ini untuk menentukan tingkat kesulitan yang menengah pada papan 5x5
//Author : Cintia Ningsih
//I.S    : Tampilan permainan dengan tingkat kesulitan menengah pada papan 5x5 belum ditampilkan
//F.S    : Tampilan permainan dengan tingkat kesulitan menengah pada papan 5x5 sudah ditampilkan

void Sulit5();
//Modul ini untuk menentukan tingkat kesulitan yang sulit pada papan 5x5
//Author : Cintia Ningsih
//I.S    : Tampilan permainan dengan tingkat kesulitan sulit pada papan 5x5 sudah ditampilkan
//F.S    : Tampilan permainan dengan tingkat kesulitan sulit pada papan 5x5 sudah ditampilkan

void Mudah7();
// author	: Berliana Elfada

//Modul untuk memulai permaianan dengan level menengah papan 7x7
//I.S : Ditampilkan tampilan layar modul jumlahpemain
//F.S : Ditampilkan tampilan permainan dengan tingkat kesulitan menengah pada papan 7x7

void Menengah7();
// author	: Berliana Elfada

//Modul untuk memulai permaianan dengan level menengah papan 7x7
//I.S : Ditampilkan tampilan layar modul jumlahpemain
//F.S : Ditampilkan tampilan permainan dengan tingkat kesulitan menengah pada papan 7x7

void Sulit7();
// author	: Berliana Elfada

//Modul untuk memulai permaianan dengan level sulit papan 7x7
//I.S : Ditampilkan tampilan layar modul jumlahpemain
//F.S : Ditampilkan tampilan permainan dengan tingkat kesulitan sulit pada papan 7x7

void Mudah9();
//Modul ini untuk menentukan tingkat kesulitan yang mudah pada papan 9x9
//Author : Cintia Ningsih
//I.S    : Tampilan permainan dengan tingkat kesulitan mudah pada papan 9x9 belum ditampilkan
//F.S    : Tampilan permainan dengan tingkat kesulitan mudah pada papan 9x9 sudah ditampilkan

void Menengah9();
//Modul ini untuk menentukan tingkat kesulitan yang menengah pada papan 9x9
//Author : Cintia Ningsih
//I.S    : Tampilan permainan dengan tingkat kesulitan menengah pada papan 9x9 belum ditampilkan
//F.S    : Tampilan permainan dengan tingkat kesulitan menengah pada papan 9x9 sudah ditampilkan

void Sulit9();
//Modul ini untuk menentukan tingkat kesulitan yang sulit pada papan 9x9
//Author : Cintia Ningsih
//I.S    : Tampilan permainan dengan tingkat kesulitan sulit pada papan 9x9 belum ditampilkan
//F.S    : Tampilan permainan dengan tingkat kesulitan sulit pada papan 9x9 sudah ditampilkan


////////////////* Modul Pergerakan Computer *////////////////

void KomputerMudah5();
/*
Author : Muhammad Deo Audha Rizki
    
Modul untuk menentukan langkah Komputer dengan tingkat kesulitan mudah pada papan 5x5, 
dengan mengacak input simbol dan kotak
    
I.S : Input simbol dan kotak dari komputer belum ada
F.S : Input simbol dan kotak dari komputer sudah ada
 
*/

void KomputerMudah7();
/*
Author : Muhammad Deo Audha Rizki
    
Modul untuk menentukan langkah Komputer dengan tingkat kesulitan mudah pada papan 7x7, 
dengan mengacak input simbol dan kotak
    
I.S : Input simbol dan kotak dari komputer belum ada
F.S : Input simbol dan kotak dari komputer sudah ada
 
*/

void KomputerMudah9();
/*
Author : Muhammad Deo Audha Rizki
    
Modul untuk menentukan langkah Komputer dengan tingkat kesulitan mudah pada papan 9x9, 
dengan mengacak input simbol dan kotak
    
I.S : Input simbol dan kotak dari komputer belum ada
F.S : Input simbol dan kotak dari komputer sudah ada
*/

void KomputerSulit();
/*
Author : Github HYanofsky
    
Modul untuk menentukan pergerakan Komputer dengan tingkat kesulitan sulit
    
I.S : Papan belum menampilkan input dari Komputer
F.S : Papan menampilkan input dari Komputer    
*/

void LangkahKomputerMudah5();
/*
Author : Muhammad Deo Audha Rizki
    
Modul untuk menentukan pergerakan Komputer dengan tingkat kesulitan mudah pada papan 5x5
    
I.S : Papan belum menampilkan input dari Komputer
F.S : Papan menampilkan input dari Komputer
    
*/

void LangkahKomputerMudah7();
/*
Author : Muhammad Deo Audha Rizki
    
Modul untuk menentukan pergerakan Komputer dengan tingkat kesulitan mudah pada papan 7x7
    
I.S : Papan belum menampilkan input dari Komputer
F.S : Papan menampilkan input dari Komputer
    
*/

void LangkahKomputerMudah9();
/*
Author : Muhammad Deo Audha Rizki
    
Modul untuk menentukan pergerakan Komputer dengan tingkat kesulitan mudah pada papan 9x9
    
I.S : Papan belum menampilkan input dari Komputer
F.S : Papan menampilkan input dari Komputer   
*/

void LangkahKomputerMenengah5();
//	author	: Berliana Elfada
	
//Modul untuk menentukan langkah yang akan diambil oleh komputer dalam permaianan level menengah papan 5x5
    
//I.S : Papan belum menampilkan input simbol dari komputer (simbol S atau O)
//F.S : Simbol komputer (simbol S atau O) ditampilkan di papan

void LangkahKomputerMenengah7();
//	author	: Berliana Elfada
	
//Modul untuk menentukan langkah yang akan diambil oleh komputer dalam permaianan level menengah papan 7x7
    
//I.S : Papan belum menampilkan input simbol dari komputer (simbol S atau O)
//F.S : Simbol komputer (simbol S atau O) ditampilkan di papan

void LangkahKomputerMenengah9();
//	author	: Berliana Elfada
	
//Modul untuk menentukan langkah yang akan diambil oleh komputer dalam permaianan level menengah papan 9x9
    
//I.S : Papan belum menampilkan input simbol dari komputer (simbol S atau O)
//F.S : Simbol komputer (simbol S atau O) ditampilkan di papan

void LangkahKomputerSulit5();
/*
Author : Muhammad Deo Audha Rizki
    
Modul untuk menentukan pergerakan Komputer dengan tingkat kesulitan sulit pada papan 5x5
    
I.S : Papan belum menampilkan input dari Komputer
F.S : Papan menampilkan input dari Komputer    
*/

void LangkahKomputerSulit7();
/*
Author : Muhammad Deo Audha Rizki
    
Modul untuk menentukan pergerakan Komputer dengan tingkat kesulitan sulit pada papan 7x7
    
I.S : Papan belum menampilkan input dari Komputer
F.S : Papan menampilkan input dari Komputer    
*/

void LangkahKomputerSulit9();
/*
Author : Muhammad Deo Audha Rizki
    
Modul untuk menentukan pergerakan Komputer dengan tingkat kesulitan sulit pada papan 9x9
    
I.S : Papan belum menampilkan input dari Komputer
F.S : Papan menampilkan input dari Komputer    
*/

int comp_find_os();
/*
Author : Github HYanofsky
    
Modul untuk mencari O dan S yang berfungsi untuk menentukan pergerakan komputer dengan tingkat kesulitan sulit

Input : Papan
Output: Kotak
*/

int comp_find_ss();
/*
Author : Github HYanofsky
    
Modul untuk mengecek kotak kosong yang terletak diantara S dan S yang berfungsi untuk menentukan pergerakan komputer dengan tingkat kesulitan sulit

Input : Papan
Output: Kotak 
*/

int find_square();
/*
Author : Github HYanofsky
    
Modul yang berfungsi untuk menentukan pergerakan komputer dengan tingkat kesulitan sulit jika tidak ditemukan kemungkinan untuk mendapatkan poin

Input : Papan
Output: Kotak 
*/

////////////////* Modul Mengecek Input *////////////////

int Cek_Kotak (int kotak);
/*
Author : Muhammad Deo Audha Rizki
    
Modul untuk mengecek kotak apakah bisa diinput atau tidak 
int kotak : parameter input bertipe integer dengan passing parameter passing by value
int kotak : berfungsi menunjukkan nomor kotak yang diinput oleh player/computer
Input : kotak
Output: Angka (1 jika kotak bisa diisi, 0 jika kotak tidak bisa diisi)
F.S : Ditampilkan tampilan permainan Player vs Player dengan papan 9x9   
*/

int cek_sos (int player, int kotak, char simbol);

/*
Author : Muhammad Deo Audha Rizki
    
Modul untuk mengecek terbentuknya sos pada papan
    
int player : parameter input bertipe integer dengan passing paramter passing by value
int player : berfungsi untuk menunjukkan jenis player yang melakukan input
int kotak : parameter input bertipe integer dengan passing parameter passing by value
int kotak : berfungsi menunjukkan nomor kotak yang diinput oleh player/computer
char simbol : parameter input bertipe character dengan passing parameter passing by value
char simbol : berfungsi menunjukkan simbol yang diinput oleh player/komputer
Input : player, kotak, simbol
Output: Angka(1 jika terbentuk sos, 0 jika tidak terbentuk sos) 
*/


////////////////*Modul Menampilkan Papan Permainan *////////////////

void beginBoard();
/*
Modul untuk menginisialisasi papan permainan dengan ' '
I.S : Papan belum terisi dengan ' '
F.S : Papan belum terisi dengan ' '
*/
void board5();
//Author	: Berliana Elfada

//Procedure untuk menampilkan papan ukuran 5x5
//I.S	: Layar menampilkan pilihan sebelum modul board5
//F.S	: Ditampilkan papan dengan grid 5x5

void board7();
//Author	: Berliana Elfada

//Procedure untuk menampilkan papan ukuran 7x7
//I.S	: Layar menampilkan pilihan sebelum modul board7
//F.S	: Ditampilkan papan dengan grid 7x7

void board9();
//Author	: Berliana Elfada

//Procedure untuk menampilkan papan ukuran 9x9
//I.S	: Layar menampilkan pilihan sebelum modul board9
//F.S	: Ditampilkan papan dengan grid 9x9


////////////////*Modul Tambahan *////////////////
int starttime();
/*
Author : Arya (JTK 20)
    
Modul untuk memulai timer
Input/Output : t
*/

int endtime();
/*
Author : Arya (JTK 20)
    
Modul untuk mengakhiri timer
Input/Output : t
*/

int game_done();
//Fungsi ini untuk mengecek permainan sudah selesai atau belum. Jika semua papan sudah terisi maka permianan selesai.
//Author : Cintia Ningsih
//Input  : papan
//Output : Return 1 jika papan sudah terisi semua dan return 0 jika papan belum terisi semua

void pemenang();
//Modul ini untuk menentukan pemenang dalam permainan dan penampilkannya kelayar
//Author : Cintia Ningsih
//I.S    : Tampilan untuk pemanang dalam permainan belum tampil
//F.S    : Tampilan untuk pemenang dalam permainan sudah tampil

int mainLagi();
//Fungsi ini untuk menanyakan kepada player apakah ingin bermain kembali atau tidak
//Author : Cintia Ningsih
//Input  : Char 'y' atau 't'
//Output : Return 1 jika 'y' dan return '0' jika 't'

void HitungSkor();
/*
Modul untuk menghitung skor berdasarkan mode permainan, tingkat kesulitan, dan jenis papan
Author : Muhammad Deo Audha Rizki
I.S : Skor pemain belum terhitung
F.S : Skor pemain sudah terhitung
*/

void SimpanSkor(int skor);
//author	: Hanifah Ghina Nabila (JTK 19)

//Modul untuk menginput nama pemain dan menyimpan nama pemain beserta skor ke dalam file DataSkor.txt
//int skor	: parameter input bertipe integer dengan passing parameter passing by value
//int skor 	: berfungsi menginput skorTotal dari modul hitungskor ke dalam struct data 
	
//I.S : File tidak ada isinya
//F.S : Skor dan nama pemain tertulis di dalam file

void showScore();
//author	: Hanifah Ghina Nabila (JTK 19)

//Modul untuk menampilkan score yang sudah disimpan di dalam file.
//I.S	: Ditampilkan tampilan MenuUtama
//F.S	: Ditampilkan tampilan berupa nama dan skor yang dimiliki

void SortScore();
// Author : Hanifah Ghina Nabila (JTK 19)

//Modul untuk mengurutkan skor yang terdapat di dalam file secara descending
//I.S : Skor pada file belum terurut
//F.S : Skor pada file sudah terurut

/*===========================================================================================================================================
===========================================================================================================================================*/
void gotoxy(int x, int y){
	
	HANDLE hConsoleOutput;  
	COORD dwCursorPosition;  
	dwCursorPosition.X = x;  
	dwCursorPosition.Y = y;  
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);  
	SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);   
}

void MenuUtama(){
    int menu;
    system("CLS");
	system("color 6");
	gotoxy(55,7);printf("\n\n\n\n\n");
	gotoxy(55,8);printf("*******   *******   **********  *** *******  *****        *****\n");
	gotoxy(55,9);printf("*     *   *     *   *        *  *   *******   *   *      *   *\n");
	gotoxy(55,10);printf("*     *****     *   *        *  *  *           *   *    *   *\n");
	gotoxy(55,11);printf("*     *****     *   *  ****  *  *  *            *   *  *   *\n");
	gotoxy(55,12);printf("*     *   *     *   *  *  *  *  *  *             *   **   *\n");
	gotoxy(55,13);printf("*******   *******   ****  ****  ****              ********\n\n\n");
	gotoxy(60,14);printf("              **** ********* **** \n");
	gotoxy(60,15);printf("              *  * *       * *  *  \n");
	gotoxy(60,16);printf("              *  * *  ****** *  *   \n");
	gotoxy(60,17);printf("        ******   * *         *  ******  \n");
	gotoxy(60,18);printf("        *        * *  ****** *       *   \n  ");
	gotoxy(60,19);printf("        *        * *       * *       *  \n");
	gotoxy(60,20);printf("        ********** ********* *********  \n");
    gotoxy(70,23);printf(" -----------------------------\n");
    gotoxy(70,24);printf(" | (1) Mulai Permainan       |\n");
    gotoxy(70,25);printf(" | (2) Cara & Aturan Bermain |\n");
    gotoxy(70,26);printf(" | (3) Skor Tertinggi        |\n");
    gotoxy(70,27);printf(" | (4) Credits               |\n");
    gotoxy(70,28);printf(" | (0) Keluar                |\n");
 	gotoxy(70,29);printf(" -----------------------------\n");
    
    gotoxy(70,31);printf("Masukkan Pilihan : ");
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
            Credits();
            break;
        
        case 0:
            exit(1);
            break;
		
		default:
			MenuUtama();
			break;
    }
}

void CaraBermain(){
	FILE*the_file = fopen("Cara_Bermain.txt", "r");
	if(the_file == NULL){
		perror("tidak ada file");
		exit(1);
	}
	
	char line[100];
	while(fgets(line, sizeof(line), the_file)){
		printf("%s", line);
	}
    printf("Tekan Tombol Untuk Melanjutkan...\n");getch();
    //KEMBALI KE MENU UTAMA
	system("CLS");
	MenuUtama();
}

void Credits() {

/*BEGIN PROCEDUR CREDITS*/
	FILE *file;
	char length[6000];//variabel length adalah variabel lokal bertipe array of char untuk memberi batas char dari file yang dibuka
	
	file=fopen("Credits.txt","r");
	
	while (fgets(length,6000,file)!=NULL){
		printf("%s", length);
	}
	
	fclose(file);
	
	gotoxy(65,30);printf("Tekan Tombol Untuk Melanjutkan...\n");getch();
	//KEMBALI KE MENU UTAMA
	system("CLS");
	MenuUtama();
/*END PROCEDURE CREDITS*/
}

void jumlahPemain(){
    int pemain;
	system("CLS");
	system("color 3");
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
    gotoxy(70,20);printf(" |  |   |_____________________________________| \n");
    gotoxy(70,21);printf(" |  |___________________________________    \n");
    gotoxy(70,22);printf(" |______________________________________| \n\n\n");
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
void maingame(){

	system("CLS");
	switch(setup){
		case 5:
			while(1){
				beginBoard();
				Mudah5();
				if(game_done()){
					board5();
                	printf("\t\t\t\t\tPermainan Selesai!\n");
					pemenang();
					HitungSkor();
					SimpanSkor(Player1);
					showScore();
					if(mainLagi()){
						MenuUtama();
					}
					else{
						break;
					}
				}
			}
		break;

		case 7:
			while(1){
				beginBoard();
				Mudah7();
				if(game_done()){
					board7();
                	printf("\t\t\t\t\tPermainan Selesai!\n");
					pemenang();
					HitungSkor();
					SimpanSkor(Player1);
					showScore();
					if(mainLagi()){
						MenuUtama();
					}
					else{
						break;
					}
				}
			}
		break;

		case 9:
			while(1){
				beginBoard();
				Mudah9();
				if(game_done()){
					board9();
                	printf("\t\t\t\t\tPermainan Selesai!\n");
					pemenang();
					HitungSkor();
					SimpanSkor(Player1);
					showScore();
					if(mainLagi()){
						MenuUtama();
					}
					else{
						break;
					}
				}
			}
		break;

		case 10:
			while(1){
				beginBoard();
				Menengah5();
				if(game_done()){
					board5();
                	printf("\t\t\t\t\tPermainan Selesai!\n");
					pemenang();
					HitungSkor();
					SimpanSkor(Player1);
					showScore();
					if(mainLagi()){
						MenuUtama();
					}
					else{
						break;
					}
				}
			}
		break;

		case 14:
			while(1){
				beginBoard();
				Menengah7();
				if(game_done()){
					board7();
                	printf("\t\t\t\t\tPermainan Selesai!\n");
					pemenang();
					HitungSkor();
					SimpanSkor(Player1);
					showScore();
					if(mainLagi()){
						MenuUtama();
					}
					else{
						break;
					}
				}
			}
		break;

		case 18:
			while(1){
				beginBoard();
				Menengah9();
				if(game_done()){
					board9();
                	printf("\t\t\t\t\tPermainan Selesai!\n");
					pemenang();
					HitungSkor();
					SimpanSkor(Player1);
					showScore();
					if(mainLagi()){
						MenuUtama();
					}
					else{
						break;
					}
				}
			}
		break;

		case 15:
			while(1){
				beginBoard();
				Sulit5();
				if(game_done()){
					board5();
                	printf("\t\t\t\t\tPermainan Selesai!\n");
					pemenang();
					HitungSkor();
					SimpanSkor(Player1);
					showScore();
					if(mainLagi()){
						MenuUtama();
					}
					else{
						break;
					}
				}
			}
		break;

		case 21:
			while(1){
				beginBoard();
				Sulit7();
				if(game_done()){
					board7();
                	printf("\t\t\t\t\tPermainan Selesai!\n");
					pemenang();
					HitungSkor();
					SimpanSkor(Player1);
					showScore();
					if(mainLagi()){
						MenuUtama();
					}
					else{
						break;
					}
				}
			}
		break;

		case 27:
			while(1){
				beginBoard();
				Sulit9();
				if(game_done()){
					board9();
                	printf("\t\t\t\t\tPermainan Selesai!\n");
					pemenang();
					HitungSkor();
					SimpanSkor(Player1);
					showScore();
					if(mainLagi()){
						MenuUtama();
					}
					else{
						break;
					}
				}
			}
		break;

		case 20:
			while(1){
				beginBoard();
				duaPemain5();
				if(game_done()){
					board5();
                	printf("\t\t\t\t\tPermainan Selesai!\n");
					pemenang();
					HitungSkor();
					printf("\n\n\t\t\t\t\tPlayer 1\n");
					SimpanSkor(Player1);
				
					printf("\n\n\t\t\t\t\tPlayer 2\n");
					SimpanSkor(Player2);
					showScore();
					if(mainLagi()){
						MenuUtama();
					}
					else{
						break;
					}
				}
			}
		break;

		case 28:
			while(1){
				beginBoard();
				duaPemain7();
				if(game_done()){
					board7();
                	printf("\t\t\t\t\tPermainan Selesai!\n");
					pemenang();
					HitungSkor();
					printf("Player 1\t");
					SimpanSkor(Player1);
				
					printf("\nPlayer 2\t");
					SimpanSkor(Player2);
					showScore();
					
					if(mainLagi()){
						MenuUtama();
					}
					else{
						break;
					}
				}
			}
		break;

		case 36:
			while(1){
				beginBoard();
				duaPemain9();
				if(game_done()){
					board9();
                	printf("\t\t\t\t\tPermainan Selesai!\n");
					pemenang();
					HitungSkor();
					printf("Player 1\t");
					SimpanSkor(Player1);
				
					printf("\nPlayer 2\t");
					SimpanSkor(Player2);
					showScore();
					
					if(mainLagi()){
						MenuUtama();
					}
					else{
						break;
					}
				}
			}
		break;
	}		

}

void LangkahPemain5(int player)
{
  int baris, kolom, kotak, startwaktu, move, acaksimbol;
  double waktuinput;
  char simbol;
  time_t t;

  do
  {
	startwaktu = starttime();
	
	board5();
	printf("\n\n\t\t\tPlayer %d Masukkan kotak yang akan diisi :   ",player);
        
	do
	{
		scanf("%d", &kotak);
	}while (!Cek_Kotak(kotak));
	startwaktu = endtime() - startwaktu;
	waktuinput = ((double)startwaktu)/CLOCKS_PER_SEC;
    if(waktuinput >10){
		printf("\n\n\t\t\t\t\t Waktu habis \n");
		system("pause");
		srand((unsigned) time(&t));
		acaksimbol = 1 + rand()% 2;
    	if(acaksimbol == 1){
        simbol = 'S';
    	}
    	else{
        simbol = 'O';
    	}
		reset:
    	move = 1 + rand()% 25;

    	baris = (move-1)/n;
		kolom = (move-1)%n;

    	if(papan[baris][kolom] != ' '){
        	goto reset;
    	}
		papan[baris][kolom] = simbol;
	}else if(waktuinput <=10){
		baris = (kotak-1)/n;
		kolom = (kotak-1)%n;
		printf("\n\t\t\tSimbol yang ingin dimasukkan %d? (S atau O)  ", kotak);
		do
		{
			simbol = getchar();
		}while ((simbol != 'S') && (simbol != 's') && (simbol != 'O') && (simbol != 'o') && (simbol != '0'));

		if((simbol == 'S') || (simbol == 's'))
		{
			simbol = 'S';
		}
		else 
		{
			simbol = 'O';	
		}
			
		papan[baris][kolom] = simbol;
	}
   }while(cek_sos (player, kotak, simbol) && !game_done()); 
   
   return;
}

void LangkahPemain7(int player)
{
  int baris, kolom, kotak, startwaktu, move, acaksimbol;
  double waktuinput;
  char simbol;
  time_t t;

	
  do
  {
	startwaktu = starttime();
	
	board7();
    printf("\n\n\t\t\tPlayer %d Masukkan kotak yang akan diisi :  ",player);
        
	do
	{
		scanf("%d", &kotak);
	}while (!Cek_Kotak(kotak));
	startwaktu = endtime() - startwaktu;
	waktuinput = ((double)startwaktu)/CLOCKS_PER_SEC;
		
    if(waktuinput >10){
		printf("\n\n\t\t\t\t\t Waktu habis \n");
		system("pause");
		srand((unsigned) time(&t));
		acaksimbol = 1 + rand()% 2;
    	if(acaksimbol == 1){
        simbol = 'S';
    	}
    	else{
        simbol = 'O';
    	}
		reset:
    	move = 1 + rand()% 49;

    	baris = (move-1)/n;
		kolom = (move-1)%n;

    	if(papan[baris][kolom] != ' '){
        	goto reset;
    	}
		papan[baris][kolom] = simbol;
	}else if(waktuinput <=10){
		baris = (kotak-1)/n;
		kolom = (kotak-1)%n;
		printf("\n\t\t\tSimbol yang ingin dimasukkan %d? (S atau O)  ", kotak);
		do
		{
			simbol = getchar();
		}while ((simbol != 'S') && (simbol != 's') && (simbol != 'O') && (simbol != 'o') && (simbol != '0'));

		if((simbol == 'S') || (simbol == 's'))
		{
			simbol = 'S';
		}
		else 
		{
			simbol = 'O';	
		}
			
		papan[baris][kolom] = simbol;
	}
   }while(cek_sos (player, kotak, simbol) && !game_done()); 
   
   return;
}

void LangkahPemain9(int player)
{
  int baris, kolom, kotak, startwaktu, move, acaksimbol;
  double waktuinput;
  char simbol;
  time_t t;

	
  do
  {
	startwaktu = starttime();
	
	board9();
    printf("\n\n\t\t\tPlayer %d Masukkan kotak yang akan diisi :  ",player);
        
	do
	{
		scanf("%d", &kotak);
	}while (!Cek_Kotak(kotak));
	startwaktu = endtime() - startwaktu;
	waktuinput = ((double)startwaktu)/CLOCKS_PER_SEC;
		
    if(waktuinput >10){
		printf("\n\n\t\t\t\t\t Waktu habis \n");
		system("pause");
		srand((unsigned) time(&t));
		acaksimbol = 1 + rand()% 2;
    	if(acaksimbol == 1){
        simbol = 'S';
    	}
    	else{
        simbol = 'O';
    	}
		reset:
    	move = 1 + rand()% 81;

    	baris = (move-1)/n;
		kolom = (move-1)%n;

    	if(papan[baris][kolom] != ' '){
        	goto reset;
    	}
		papan[baris][kolom] = simbol;
	}else if(waktuinput <=10){
		baris = (kotak-1)/n;
		kolom = (kotak-1)%n;
		printf("\n\t\t\tSimbol yang ingin dimasukkan %d? (S atau O)  ", kotak);
		do
		{
			simbol = getchar();
		}while ((simbol != 'S') && (simbol != 's') && (simbol != 'O') && (simbol != 'o') && (simbol != '0'));

		if((simbol == 'S') || (simbol == 's'))
		{
			simbol = 'S';
		}
		else 
		{
			simbol = 'O';	
		}
			
		papan[baris][kolom] = simbol;
	}
   }while(cek_sos (player, kotak, simbol) && !game_done()); 
   
   return;
}

void duaPemain5()
{
	do
	{
		LangkahPemain5(1);
		if(game_done())
		{ 
			return;
		}
		LangkahPemain5(2);
	}while (!game_done());

	return;	
}

void duaPemain7()
{
	do
	{
		LangkahPemain7(1);
		if(game_done())
		{ 
			return;
		}
		LangkahPemain7(2);
	}while (!game_done());

	return;	
}

void duaPemain9()
{
	do
	{
		LangkahPemain9(1);
		if(game_done())
		{ 
			return;
		}
		LangkahPemain9(2);
	}while (!game_done());

	return;	
}

void Mudah5(){
	while(!game_done())
	{	
			if(!game_done()){
				LangkahPemain5(1);
			}
			if(!game_done()){
				LangkahKomputerMudah5();
			}
					
		
	}
	return;
}

void Menengah5(){
	while(!game_done())
	{	
			if(!game_done()){
				LangkahPemain5(1);
			}
			if(!game_done()){
				LangkahKomputerMenengah5();
			}
		
	}
	return;
}

void Sulit5(){
	while(!game_done())
	{	
			if(!game_done()){
				LangkahPemain5(1);
			}
			if(!game_done()){
				LangkahKomputerSulit5();
			}
					
	}
	return;
}

void Mudah7(){
	while(!game_done())
	{	
			if(!game_done()){
				LangkahPemain7(1);
			}
			if(!game_done()){
				LangkahKomputerMudah7();
			}
					
		
	}
	return;
}

void Menengah7(){
	while(!game_done())
	{	
			if(!game_done()){
				LangkahPemain7(1);
			}
			if(!game_done()){
				LangkahKomputerMenengah7();	
			}
			
				
		
	}
	return;
}

void Sulit7(){
	while(!game_done())
	{		
			if(!game_done()){
				LangkahPemain7(1);
			}
			if(!game_done()){
				LangkahKomputerSulit7();
			}					
		
	}
	return;
}

void Mudah9(){
	while(!game_done())
	{	
			if(!game_done()){
				LangkahPemain9(1);
			}
			if(!game_done()){
				LangkahKomputerMudah9();
			}
					
		
	}
	return;
}

void Menengah9(){
	while(!game_done())
	{	
			if(!game_done()){
				LangkahPemain9(1);
			}
			if(!game_done()){
				LangkahKomputerMenengah9();	
			}
			
				
		
	}
	return;
}

void Sulit9(){
	while(!game_done())
	{	
			if(!game_done()){
				LangkahPemain9(1);
			}
			if(!game_done()){
				LangkahKomputerSulit9();
			}
					
	}
	return;
}


void KomputerMudah5(){
	
    int i,move, acaksimbol, baris, kolom;
    char simbol;
	time_t t;
	do{
   	srand((unsigned) time(&t));


    
    acaksimbol = 1 + rand()% 2;
    if(acaksimbol == 1){
        simbol = 'S';
    }
    else{
        simbol = 'O';
    }

    reset:
    move = 1 + rand()% 25;

    baris = (move-1)/n;
	kolom = (move-1)%n;

    if(papan[baris][kolom] != ' '){
        goto reset;
    }
    else{
        papan[baris][kolom] = simbol;
    }
	printf("Komputer memasukkan %c ke kotak %d\n", simbol, move);
	}while(cek_sos (3, move, simbol) && !game_done());
}

void KomputerMudah7(){
	
    int i,move, acaksimbol, baris, kolom;
    char simbol;
	time_t t;
	do{
   	srand((unsigned) time(&t));


    
    acaksimbol = 1 + rand()% 2;
    if(acaksimbol == 1){
        simbol = 'S';
    }
    else{
        simbol = 'O';
    }

    reset:
    move = 1 + rand()% 49;

    baris = (move-1)/n;
	kolom = (move-1)%n;

    if(papan[baris][kolom] != ' '){
        goto reset;
    }
    else{
        papan[baris][kolom] = simbol;
    }
	printf("Komputer memasukkan %c ke kotak %d\n", simbol, move);
	}while(cek_sos (3, move, simbol));
}

void KomputerMudah9(){
	
    int i,move, acaksimbol, baris, kolom;
    char simbol;
	time_t t;
	do{
   	srand((unsigned) time(&t));


    
    acaksimbol = 1 + rand()% 2;
    if(acaksimbol == 1){
        simbol = 'S';
    }
    else{
        simbol = 'O';
    }

    reset:
    move = 1 + rand()% 81;

    baris = (move-1)/n;
	kolom = (move-1)%n;

    if(papan[baris][kolom] != ' '){
        goto reset;
    }
    else{
        papan[baris][kolom] = simbol;
    }
	printf("Komputer memasukkan %c ke kotak %d\n", simbol, move);
	}while(cek_sos (3, move, simbol));
}

void KomputerSulit(){
    int kotak;
    int baris, kolom;
    char simbol;

    do{
       
	    if(comp_find_os()){
		kotak = comp_find_os();
		simbol = 'S';
	    }
	    else if(comp_find_ss()){
		kotak = comp_find_ss();
		simbol = 'O';
	    }
	    else{
		kotak = find_square();
		simbol = 'S';
	    }
	    baris = (kotak-1)/n;
	    kolom = (kotak-1)%n;
        
		if(kotak!=0){
   	    	papan[baris][kolom] = simbol;
	    	printf("Saya menempatkan %c di kotak %d\n", simbol, kotak);
		}
   }while(cek_sos(3, kotak, simbol));
   return;
}

void LangkahKomputerMudah5(){
	KomputerMudah5();
	board5();
	return;
}

void LangkahKomputerMudah7(){
	KomputerMudah7();
	board7();
	return;
}

void LangkahKomputerMudah9(){
	KomputerMudah9();
	board9();
	return;
}

void LangkahKomputerMenengah5(){
	if(Player1 < 5){
		KomputerMudah5();
	
    	board5();
	}
	else{
		KomputerSulit();
		board5();
	}

   return;
}

void LangkahKomputerMenengah7(){
	if(Player1 < 5){
		KomputerMudah7();
	
    	board7();
	}
	else{
		KomputerSulit();
		board7();
	}

   return;
}

void LangkahKomputerMenengah9(){
	if(Player1 < 5){
		KomputerMudah9();
	
    	board9();
	}
	else{
		KomputerSulit();
		board9();
	}

   return;
}

void LangkahKomputerSulit5(){
	KomputerSulit();
	board5();
	return;
}

void LangkahKomputerSulit7(){
	KomputerSulit();
	board7();
	return;
}

void LangkahKomputerSulit9(){
	KomputerSulit();
	board9();
	return;
}

int comp_find_os(){
	int kotak, i, j;

	for (i=0; i<n; i++){
		for(j=0; j<n; j++){
		   kotak = ((i*n) +j)+1;
		   if(Cek_Kotak(kotak)){
			    if((papan[i][j+1]=='O') && (papan[i][j+2] == 'S')){
				    return kotak;
			    }
                if((papan[i][j-1]=='O') && (papan[i][j-2] == 'S')){
                    return kotak;
                }
			    if ((papan[i+1][j] == 'O') && (papan[i+2][j] =='S')){
				    return kotak;
			    }
                if ((papan[i-1][j] == 'O') && (papan[i-2][j] =='S')) {
                    return kotak;
                }
			    if((papan[i+1][j+1] == 'O') && (papan[i+2][j+2] == 'S')){
                    return kotak;
                }
                if((papan[i-1][j-1] == 'O') && (papan[i-2][j-2] == 'S')){
                    return kotak;
                }
                if((papan[i+1][j-1] == 'O') && (papan[i+2][j-2] == 'S')){
                    return kotak;
                }
                if((papan[i-1][j+1] == 'O') && (papan[i-2][j+2] == 'S')){
                    return kotak;
                }
		  }
		}
	}
	return 0;
}

int comp_find_ss(){
	int kotak, i, j;

    for (i=0; i<n; i++){
        for(j=0; j<n; j++){  
            kotak = ((i*n) +j)+1;

            if(Cek_Kotak(kotak)){

		        if((papan[i][j+1]=='S') && (papan[i][j-1] == 'S')){
                    return kotak;
                }
                if ((papan[i+1][j] == 'S') && (papan[i-1][j] =='S')){
                    return kotak;
                }
                if((papan[i+1][j+1] == 'S') && (papan[i-1][j-1] == 'S')){
                    return kotak;
                }
                if((papan[i+1][j-1] == 'S') && (papan[i-1][j+1] == 'S')){
                    return kotak;
                }
            }
		}
    }
	return 0;
}

int find_square(){
	int baris, kolom, kotak;
	
	for (kotak=1; kotak<((n*n)+1); kotak++){
		baris = (kotak-1)/n;
		kolom = (kotak-1)%n;
		if (papan[baris][kolom] == ' '){
			return kotak;
		}
	}
	return 0;
}

int Cek_Kotak (int kotak)
{
   int baris, kolom;
   
   if(kotak>0 && kotak<((n*n)+1)){	
	baris = (kotak-1)/n;
	kolom = (kotak-1)%n;

	if (papan[baris][kolom]==' '){
		return 1;
	}
	else{
		
		return 0;
	} 
  }
  else{
	  
	  return 0;
  }
}

int cek_sos (int player, int kotak, char simbol)
{
	int baris,kolom,sos,cek;

	
	baris = (kotak-1)/n;
	kolom = (kotak-1)%n;
	sos = 0;
		
  if(simbol == 'S'){
  
		if ((papan[baris][kolom-2] == 'S') && (papan[baris][kolom-1] == 'O') && (kolom-2>=0) && (kolom-1>=0)){	
			sos++;
		}
		if((papan[baris-1][kolom] == 'O') && (papan[baris-2][kolom] == 'S') && (baris-1>=0) && (baris-2>=0)){	
			sos++;
		}

		if((papan[baris-1][kolom-1] == 'O') && (papan[baris-2][kolom-2] == 'S') && (baris-1>=0 && kolom-1>=0) && (baris-2>=0 && kolom-2>=0)){	
			sos++;
		}
		if((papan[baris+1][kolom-1] == 'O') && (papan[baris+2][kolom-2] == 'S') && (kolom-1>=0) && (kolom-2>=0)){	
			sos++;
		}
		if((papan[baris-1][kolom+1] == 'O') && (papan[baris-2][kolom+2] == 'S') && (baris-1>=0) && (baris-2>=0)){	
			sos++;
		}
	if ((papan[baris][kolom+1]== 'O') && (papan[baris][kolom+2] == 'S')){	
		sos++;
	}	
	if((papan[baris+1][kolom] == 'O') && (papan[baris+2][kolom] == 'S')){	
		sos++;
	}
	
	if((papan[baris+1][kolom+1] == 'O') && (papan[baris+2][kolom+2] == 'S')){	
		sos++;
	}
	
	
	
  }
  else if(simbol == 'O'){
  
	if((papan[baris+1][kolom] == 'S') && (papan[baris-1][kolom] == 'S') && (baris-1>=0))
	{
		sos++;
	}
	if((papan[baris][kolom+1] == 'S') && (papan[baris][kolom-1] == 'S') && (kolom-1>=0))
	{
		sos++;
	}
	if((papan[baris+1][kolom+1] == 'S') && (papan[baris-1][kolom-1] == 'S') && (baris-1>=0 && kolom-1>=0))
	{
		sos++;
	}
	if((papan[baris+1][kolom-1] == 'S') && (papan[baris-1][kolom+1] == 'S') && (kolom-1>=0 && baris-1>=0))
	{
		sos++;
	}
  }



        if (player == 1)
        {
                Player1= Player1+sos;
				
        }
        else if (player == 2)
        {
                 Player2= Player2+sos;
        }
        else if (player == 3 && !game_done())
        {
                 Computer= Computer+sos;
        }
	


	if (sos>0 && !game_done())
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void beginBoard(){
	int baris, kolom;
	for (baris = 0; baris < n; baris++)
	{
		for (kolom=0; kolom<n; kolom++)
		{
			papan[baris][kolom]=' ';
		}
	}
	Player1 = 0;
	Player2 = 0;
	Computer = 0;
	
	return;
}

void board5(){
	system("CLS");
	system("color 2");
	/*TAMPILAN PAPAN*//*TAMPILAN PAPAN YANG AKAN DIISI INPUT PLAYER*/
	gotoxy(57,8);printf(" ____ ____ ____ ____ ____\n");
	gotoxy(57,9);printf("|    |    |    |    |    |\n");
	gotoxy(57,10);printf("| %c  | %c  | %c  | %c  | %c  | \n", papan[0][0], papan[0][1], papan[0][2], papan[0][3], papan[0][4]); //tempat penyimpanan kotak 1-5
	gotoxy(57,11);printf("|____|____|____|____|____|\n");
	gotoxy(57,12);printf("|    |    |    |    |    |\n");
	gotoxy(57,13);printf("| %c  | %c  | %c  | %c  | %c  | \n",papan[1][0], papan[1][1], papan[1][2], papan[1][3], papan[1][4]);//tempat penyimpanan kotak 6-10
	gotoxy(57,14);printf("|____|____|____|____|____|\n");
	gotoxy(57,15);printf("|    |    |    |    |    |\n");
	gotoxy(57,16);printf("| %c  | %c  | %c  | %c  | %c  | \n",papan[2][0], papan[2][1], papan[2][2], papan[2][3], papan[2][4]); //tempat penyimpanan kotak 11-15
	gotoxy(57,17);printf("|____|____|____|____|____|\n");
	gotoxy(57,18);printf("|    |    |    |    |    |\n");
	gotoxy(57,19);printf("| %c  | %c  | %c  | %c  | %c  | \n",papan[3][0], papan[3][1], papan[3][2], papan[3][3], papan[3][4]); //tempat penyimpanan kotak 16-20
	gotoxy(57,20);printf("|____|____|____|____|____|\n");
	gotoxy(57,21);printf("|    |    |    |    |    |\n");
	gotoxy(57,22);printf("| %c  | %c  | %c  | %c  | %c  | \n",papan[4][0], papan[4][1], papan[4][2], papan[4][3], papan[4][4]); //tempat penyimpanan kotak 21-25
	gotoxy(57,23);printf("|____|____|____|____|____|\n");
	/*END TAMPILAN PAPAN YANG AKAN DIISI INPUT PLAYER*/
	
	/*TAMPILAN PAPAN MAP*/
	gotoxy(87,8);printf(" ____ ____ ____ ____ ____\n");
	gotoxy(87,9);printf("|    |    |    |    |    |\n");
	gotoxy(87,10);printf("| 1  | 2  | 3  | 4  |  5 | \n"); //tempat penyimpanan kotak 1-5
	gotoxy(87,11);printf("|____|____|____|____|____|\n");
	gotoxy(87,12);printf("|    |    |    |    |    |\n");
	gotoxy(87,13);printf("|  6 |  7 |  8 |  9 | 10 | \n");//tempat penyimpanan kotak 6-10
	gotoxy(87,14);printf("|____|____|____|____|____|\n");
	gotoxy(87,15);printf("|    |    |    |    |    |\n");
	gotoxy(87,16);printf("| 11 | 12 | 13 | 14 | 15 |  \n"); //tempat penyimpanan kotak 11-15
	gotoxy(87,17);printf("|____|____|____|____|____|\n");
	gotoxy(87,18);printf("|    |    |    |    |    |\n");
	gotoxy(87,19);printf("| 16 | 17 | 18 | 19 | 20 | \n"); //tempat penyimpanan kotak 16-20
	gotoxy(87,20);printf("|____|____|____|____|____|\n");
	gotoxy(87,21);printf("|    |    |    |    |    |\n");
	gotoxy(87,22);printf("| 21 | 22 | 23 | 24 | 25 |  \n"); //tempat penyimpanan kotak 21-25
	gotoxy(87,23);printf("|____|____|____|____|____|\n");	
	/*END TAMPILAN PAPAN MAP*/

	printf("\n");		
	if(players == 1){
		gotoxy(63,26);printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
		gotoxy(63,27);printf(":: Player dapat %d poin, dan komputer %d poin::\n", Player1, Computer);
		gotoxy(63,28);printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
	}
	else if (players == 2){
		gotoxy(27,26);printf("\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::\n");
		gotoxy(27,27);printf("\t\t\t\t\t:: Player1 dapat %d poin, dan player2 %d poin ::\n", Player1, Player2);
		gotoxy(27,28);printf("\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::\n");
	}
	return;
}

void board7(){
	system("CLS");
	system("color 2");
	/*TAMPILAN PAPAN*//*TAMPILAN PAPAN YANG AKAN DIISI INPUT PLAYER*/
	gotoxy(47,5);printf(" ____ ____ ____ ____ ____ ____ ____\n");
	gotoxy(47,6);printf("|    |    |    |    |    |    |    |\n");
	gotoxy(47,7);printf("| %c  | %c  | %c  | %c  | %c  |  %c |  %c | \n", papan[0][0], papan[0][1], papan[0][2], papan[0][3], papan[0][4], papan[0][5], papan[0][6]); //tempat penyimpanan kotak 1-7
	gotoxy(47,8);printf("|____|____|____|____|____|____|____|\n");
	gotoxy(47,9);printf("|    |    |    |    |    |    |    |\n");
	gotoxy(47,10);printf("| %c  | %c  | %c  | %c  | %c  |  %c |  %c | \n", papan[1][0], papan[1][1], papan[1][2], papan[1][3], papan[1][4], papan[1][5], papan[1][6]); //tempat penyimpanan kotak 8-14
	gotoxy(47,11);printf("|____|____|____|____|____|____|____|\n");
	gotoxy(47,12);printf("|    |    |    |    |    |    |    |\n");
	gotoxy(47,13);printf("| %c  | %c  | %c  | %c  | %c  |  %c |  %c | \n", papan[2][0], papan[2][1], papan[2][2], papan[2][3], papan[2][4], papan[2][5], papan[2][6]); //tempat penyimpanan kotak 15-21
	gotoxy(47,14);printf("|____|____|____|____|____|____|____|\n");
	gotoxy(47,15);printf("|    |    |    |    |    |    |    |\n");
	gotoxy(47,16);printf("| %c  | %c  | %c  | %c  | %c  |  %c |  %c | \n", papan[3][0], papan[3][1], papan[3][2], papan[3][3], papan[3][4], papan[3][5], papan[3][6]); //tempat penyimpanan kotak 22-28
	gotoxy(47,17);printf("|____|____|____|____|____|____|____|\n");
	gotoxy(47,18);printf("|    |    |    |    |    |    |    |\n");
	gotoxy(47,19);printf("| %c  | %c  | %c  | %c  | %c  |  %c |  %c | \n", papan[4][0], papan[4][1], papan[4][2], papan[4][3], papan[4][4], papan[4][5], papan[4][6]); //tempat penyimpanan kotak 29-35
	gotoxy(47,20);printf("|____|____|____|____|____|____|____|\n");
    gotoxy(47,21);printf("|    |    |    |    |    |    |    |\n");
	gotoxy(47,22);printf("| %c  | %c  | %c  | %c  | %c  |  %c |  %c | \n", papan[5][0], papan[5][1], papan[5][2], papan[5][3], papan[5][4], papan[5][5], papan[5][6]); //tempat penyimpanan kotak 36-42
	gotoxy(47,23);printf("|____|____|____|____|____|____|____|\n");
    gotoxy(47,24);printf("|    |    |    |    |    |    |    |\n");
	gotoxy(47,25);printf("| %c  | %c  | %c  | %c  | %c  |  %c |  %c | \n", papan[6][0], papan[6][1], papan[6][2], papan[6][3], papan[6][4], papan[6][5], papan[6][6]); //tempat penyimpanan kotak 43-49
	gotoxy(47,26);printf("|____|____|____|____|____|____|____|\n");
	/*END TAMPILAN PAPAN YANG AKAN DIISI INPUT PLAYER*/
	/*TAMPILAN PAPAN MAP*/
	gotoxy(97,5);printf(" ____ ____ ____ ____ ____ ____ ____\n");
	gotoxy(97,6);printf("|    |    |    |    |    |    |    |\n");
	gotoxy(97,7);printf("| 1  | 2  | 3  | 4  |  5 |  6 |  7 | \n"); //tempat penyimpanan kotak 1-7
	gotoxy(97,8);printf("|____|____|____|____|____|____|____|\n");
	gotoxy(97,9);printf("|    |    |    |    |    |    |    |\n");
	gotoxy(97,10);printf("|  8 |  9 | 10 | 11 | 12 | 13 | 14 |\n");//tempat penyimpanan kotak 8-14
	gotoxy(97,11);printf("|____|____|____|____|____|____|____|\n");
	gotoxy(97,12);printf("|    |    |    |    |    |    |    |\n");
	gotoxy(97,13);printf("| 15 | 16 | 17 | 18 | 19 | 20 | 21 |  \n"); //tempat penyimpanan kotak 15-21
	gotoxy(97,14);printf("|____|____|____|____|____|____|____|\n");
	gotoxy(97,15);printf("|    |    |    |    |    |    |    |\n");
	gotoxy(97,16);printf("| 22 | 23 | 24 | 25 | 26 | 27 | 28 |\n"); //tempat penyimpanan kotak 22-28
	gotoxy(97,17);printf("|____|____|____|____|____|____|____|\n");
	gotoxy(97,18);printf("|    |    |    |    |    |    |    |\n");
	gotoxy(97,19);printf("| 29 | 30 | 31 | 32 | 33 | 34 | 35 |\n"); //tempat penyimpanan kotak 29-35
	gotoxy(97,20);printf("|____|____|____|____|____|____|____|\n");
    gotoxy(97,21);printf("|    |    |    |    |    |    |    |\n");
	gotoxy(97,22);printf("| 36 | 37 | 38 | 39 | 40 | 41 | 42 |\n"); //tempat penyimpanan kotak 36-42
	gotoxy(97,23);printf("|____|____|____|____|____|____|____|\n");
    gotoxy(97,24);printf("|    |    |    |    |    |    |    |\n");
	gotoxy(97,25);printf("| 43 | 44 | 45 | 46 | 47 | 48 | 49 |\n"); //tempat penyimpanan kotak 43-49
	gotoxy(97,26);printf("|____|____|____|____|____|____|____|\n");	
	/*END TAMPILAN PAPAN MAP*/

	printf("\n");		
	if(players == 1){
		gotoxy(63,29);printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
		gotoxy(63,30);printf(":: Player dapat %d poin, dan komputer %d poin ::\n", Player1, Computer);
		gotoxy(63,31);printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
	}
	else if (players == 2){
		gotoxy(63,29);printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
		gotoxy(63,30);printf(":: Player1 dapat %d poin, dan player2 %d poin ::\n", Player1, Player2);
		gotoxy(63,31);printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
	}
	return;
}

void board9(){
	system("CLS");
	system("color 2");
   /*TAMPILAN PAPAN*//*TAMPILAN PAPAN YANG AKAN DIISI INPUT PLAYER*/
	gotoxy(37,2);printf(" ____ ____ ____ ____ ____ ____ ____ ____ ____\n");
	gotoxy(37,3);printf("|    |    |    |    |    |    |    |    |    |\n");
	gotoxy(37,4);printf("| %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | \n", papan[0][0], papan[0][1], papan[0][2], papan[0][3], papan[0][4], papan[0][5], papan[0][6], papan[0][7], papan[0][8]); //tempat penyimpanan kotak 1-9
	gotoxy(37,5);printf("|____|____|____|____|____|____|____|____|____|\n");
	gotoxy(37,6);printf("|    |    |    |    |    |    |    |    |    |\n");
	gotoxy(37,7);printf("| %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | \n", papan[1][0], papan[1][1], papan[1][2], papan[1][3], papan[1][4], papan[1][5], papan[1][6], papan[1][7], papan[1][8]); //tempat penyimpanan kotak 10-18
	gotoxy(37,8);printf("|____|____|____|____|____|____|____|____|____|\n");
	gotoxy(37,9);printf("|    |    |    |    |    |    |    |    |    |\n");
	gotoxy(37,10);printf("| %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | \n", papan[2][0], papan[2][1], papan[2][2], papan[2][3], papan[2][4], papan[2][5], papan[2][6], papan[2][7], papan[2][8]); //tempat penyimpanan kotak 19-27
	gotoxy(37,11);printf("|____|____|____|____|____|____|____|____|____|\n");
	gotoxy(37,12);printf("|    |    |    |    |    |    |    |    |    |\n");
	gotoxy(37,13);printf("| %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | \n", papan[3][0], papan[3][1], papan[3][2], papan[3][3], papan[3][4], papan[3][5], papan[3][6], papan[3][7], papan[3][8]); //tempat penyimpanan kotak 28-36
	gotoxy(37,14);printf("|____|____|____|____|____|____|____|____|____|\n");
	gotoxy(37,15);printf("|    |    |    |    |    |    |    |    |    |\n");
	gotoxy(37,16);printf("| %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | \n", papan[4][0], papan[4][1], papan[4][2], papan[4][3], papan[4][4], papan[4][5], papan[4][6], papan[4][7], papan[4][8]); //tempat penyimpanan kotak 37-45
	gotoxy(37,17);printf("|____|____|____|____|____|____|____|____|____|\n");
    gotoxy(37,18);printf("|    |    |    |    |    |    |    |    |    |\n");
	gotoxy(37,19);printf("| %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | \n", papan[5][0], papan[5][1], papan[5][2], papan[5][3], papan[5][4], papan[5][5], papan[5][6], papan[5][7], papan[5][8]); //tempat penyimpanan kotak 46-54
	gotoxy(37,20);printf("|____|____|____|____|____|____|____|____|____|\n");
    gotoxy(37,21);printf("|    |    |    |    |    |    |    |    |    |\n");
	gotoxy(37,22);printf("| %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | \n", papan[6][0], papan[6][1], papan[6][2], papan[6][3], papan[6][4], papan[6][5], papan[6][6], papan[6][7], papan[6][8]); //tempat penyimpanan kotak 55-63
	gotoxy(37,23);printf("|____|____|____|____|____|____|____|____|____|\n");
    gotoxy(37,24);printf("|    |    |    |    |    |    |    |    |    |\n");
	gotoxy(37,25);printf("| %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | \n", papan[7][0], papan[7][1], papan[7][2], papan[7][3], papan[7][4], papan[7][5], papan[7][6], papan[7][7], papan[7][8]); //tempat penyimpanan kotak 64-72
	gotoxy(37,26);printf("|____|____|____|____|____|____|____|____|____|\n");
    gotoxy(37,27);printf("|    |    |    |    |    |    |    |    |    |\n");
	gotoxy(37,28);printf("| %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | \n", papan[8][0], papan[8][1], papan[8][2], papan[8][3], papan[8][4], papan[8][5], papan[8][6], papan[8][7], papan[8][8]); //tempat penyimpanan kotak 73-81
	gotoxy(37,29);printf("|____|____|____|____|____|____|____|____|____|\n");
	/*END TAMPILAN PAPAN YANG AKAN DIISI INPUT PLAYER*/
	/*TAMPILAN PAPAN MAP*/
	gotoxy(87,2);printf(" ____ ____ ____ ____ ____ ____ ____ ____ ____\n");
	gotoxy(87,3);printf("|    |    |    |    |    |    |    |    |    |\n");
	gotoxy(87,4);printf("| 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  | 9  |\n"); //tempat penyimpanan kotak 1-9
	gotoxy(87,5);printf("|____|____|____|____|____|____|____|____|____|\n");
	gotoxy(87,6);printf("|    |    |    |    |    |    |    |    |    |\n");
	gotoxy(87,7);printf("| 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 |\n"); //tempat penyimpanan kotak 10-18
	gotoxy(87,8);printf("|____|____|____|____|____|____|____|____|____|\n");
	gotoxy(87,9);printf("|    |    |    |    |    |    |    |    |    |\n");
	gotoxy(87,10);printf("| 19 | 20 | 21 | 22 | 23 | 24 | 25 | 26 | 27 |\n"); //tempat penyimpanan kotak 19-27
	gotoxy(87,11);printf("|____|____|____|____|____|____|____|____|____|\n");
	gotoxy(87,12);printf("|    |    |    |    |    |    |    |    |    |\n");
	gotoxy(87,13);printf("| 28 | 29 | 30 | 31 | 32 | 33 | 34 | 35 | 36 |\n"); //tempat penyimpanan kotak 28-36
	gotoxy(87,14);printf("|____|____|____|____|____|____|____|____|____|\n");
	gotoxy(87,15);printf("|    |    |    |    |    |    |    |    |    |\n");
	gotoxy(87,16);printf("| 37 | 38 | 39 | 40 | 41 | 42 | 43 | 44 | 45 |\n"); //tempat penyimpanan kotak 37-45
	gotoxy(87,17);printf("|____|____|____|____|____|____|____|____|____|\n");
    gotoxy(87,18);printf("|    |    |    |    |    |    |    |    |    |\n");
	gotoxy(87,19);printf("| 46 | 47 | 48 | 49 | 50 | 51 | 52 | 53 | 54 |\n"); //tempat penyimpanan kotak 46-54
	gotoxy(87,20);printf("|____|____|____|____|____|____|____|____|____|\n");
    gotoxy(87,21);printf("|    |    |    |    |    |    |    |    |    |\n");
	gotoxy(87,22);printf("| 55 | 56 | 57 | 58 | 59 | 60 | 61 | 62 | 63 |\n"); //tempat penyimpanan kotak 55-63
	gotoxy(87,23);printf("|____|____|____|____|____|____|____|____|____|\n");
    gotoxy(87,24);printf("|    |    |    |    |    |    |    |    |    |\n");
	gotoxy(87,25);printf("| 64 | 65 | 66 | 67 | 68 | 69 | 70 | 71 | 72 |\n"); //tempat penyimpanan kotak 64-72
	gotoxy(87,26);printf("|____|____|____|____|____|____|____|____|____|\n");
    gotoxy(87,27);printf("|    |    |    |    |    |    |    |    |    |\n");
	gotoxy(87,28);printf("| 73 | 74 | 75 | 76 | 77 | 78 | 79 | 80 | 81 |\n"); //tempat penyimpanan kotak 73-81
	gotoxy(87,29);printf("|____|____|____|____|____|____|____|____|____|\n");	
	/*END TAMPILAN PAPAN MAP*/

    printf("\n");		
	if(players == 1){
		gotoxy(63,32);printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
		gotoxy(63,33);printf(":: Player dapat %d poin, dan komputer %d poin ::\n", Player1, Computer);
		gotoxy(63,34);printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
	}
	else if (players == 2){
		gotoxy(63,32);printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
		gotoxy(63,33);printf(":: Player1 dapat %d poin, dan player2 %d poin ::\n", Player1, Player2);
		gotoxy(63,34);printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
	}
	return;
}

int starttime(){
    clock_t t;
    t = clock();
    return t;
}

int endtime(){
    clock_t t;
    t = clock();
    return t;
}

int game_done(){
	int baris, kolom;
	
	for (baris=0; baris<n; baris++)
	{
		for(kolom=0; kolom<n; kolom++)
		{
			if (papan[baris][kolom] == ' ')
			{
				return 0;
			}
		}
	}
	
	return 1;
}

void pemenang()
{
	if ((Player1 > Player2) && (Player1 > Computer))
	{
		printf("\t\t\t\t\tPlayer 1 menang!\n");
	}
	else if (Player2> Player1)
	{
		printf("\t\t\t\t\tPlayer 2 menang!\n");
	}
	else if (Computer > Player1)
	{ 
		printf("\t\t\t\t\tSaya menang!\n");
	}
	else
	{
		printf("\t\t\t\t\tPermainan seri\n");
	}
}

int mainLagi(){
  char response;

  printf("\t\t\t\t\tApakah anda ingin bermain lagi? (y/t) \n");
  do
  {
    response = getchar();

  }while ((response != 'y') && (response != 'Y') &&
       (response != 't') && (response != 'T'));

  if ((response == 'y') || (response == 'Y'))
  {
     return 1;
  }
  else
  {
    return 0;
  }
}

void HitungSkor(){

	
	switch(setup){
		case 5:
			Player1*=50;
			break;
		case 7:
			Player1*=70;
			break;
		case 9:
			Player1*=90;
			break;
		case 10:
			Player1*=100;
			break;
		case 14:
			Player1*=140;
			break;
		case 18:
			Player1*=180;
			break;
        case 15:
			Player1*=150;
			break;
        case 21:
			Player1*=210;
			break;
        case 27:
			Player1*=270;
			break;
        case 20:
			Player1*=250;
            Player2*=250;
			break;
        case 28:
			Player1*=350;
            Player2*=350;
			break;
        case 36:
			Player1*=500;
            Player2*=500;
			break;
	}
	
}

void SimpanSkor(int skor){

	struct SaveScore data; 
	FILE *DataSkor;
	int pilihan;
	
	DataSkor = fopen("DataSkor.txt", "ab");
	printf("\n\t\t\t\t\tSkor kamu : %d\n", skor);
	data.skor = skor;

	printf("\t\t\t\t\tMasukkan nama kamu : ");
	scanf("%s", &data.NamaPemain);
	
	fprintf(DataSkor, "%s - %d\n", data.NamaPemain, data.skor);
	fclose(DataSkor);	
}

void showScore(){

	SortScore();
   
    FILE *tampil;
    struct SaveScore data;
    int y = 1;
    
    tampil = fopen("DataSkor.txt", "rb");
    printf("Papan Peringkat\n");
    while (!feof(tampil)) {
        fscanf(tampil, "%s - %d\n", &data.NamaPemain, &data.skor);
        
        printf("%d. %s - %d\n\n", y, data.NamaPemain, data.skor);
    	y++;
	}    
	
}

void SortScore(){

	FILE *arrange;
	struct SaveScore leaderboard[100];
	struct SaveScore temp;
	int n, i, j;
	
	arrange = fopen("DataSkor.txt", "rb");
	n = 0;
	while(!feof(arrange)){
		fscanf(arrange, "%s - %d\n", &leaderboard[n].NamaPemain, &leaderboard[n].skor);
		n++;
	}
	fclose(arrange);
	
	for(i=0; i<n-1; i++){
		for(j=0; j<n-1; j++){
			if(leaderboard[j].skor < leaderboard[j+1].skor){
				temp = leaderboard[j];
				leaderboard[j] = leaderboard[j+1];
				leaderboard[j+1] = temp;
			}
		}
	}
	
	arrange = fopen("DataSkor.txt", "wb");
	
	for(i=0; i<n; i++){
		fprintf(arrange, "%s - %d\n", leaderboard[i].NamaPemain, leaderboard[i].skor);
		};
	fclose(arrange);
}

int main(){
	MenuUtama();
	return 0;
}
