#include <stdio.h>

void board7();
int players=2, Player1=1, Player2=1, Computer;
int papan[7][7];
//Author	: Berliana Elfada

//Procedure untuk menampilkan papan ukuran 7x7
//I.S	: Layar menampilkan pilihan sebelum modul board7
//F.S	: Ditampilkan papan dengan grid 7x7

int main(){
	
	board7();
	return 0;
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
	gotoxy(87,5);printf(" ____ ____ ____ ____ ____ ____ ____\n");
	gotoxy(87,6);printf("|    |    |    |    |    |    |    |\n");
	gotoxy(87,7);printf("| 1  | 2  | 3  | 4  |  5 |  6 |  7 | \n"); //tempat penyimpanan kotak 1-7
	gotoxy(87,8);printf("|____|____|____|____|____|____|____|\n");
	gotoxy(87,9);printf("|    |    |    |    |    |    |    |\n");
	gotoxy(87,10);printf("|  8 |  9 | 10 | 11 | 12 | 13 | 14 |\n");//tempat penyimpanan kotak 8-14
	gotoxy(87,11);printf("|____|____|____|____|____|____|____|\n");
	gotoxy(87,12);printf("|    |    |    |    |    |    |    |\n");
	gotoxy(87,13);printf("| 15 | 16 | 17 | 18 | 19 | 20 | 21 |  \n"); //tempat penyimpanan kotak 15-21
	gotoxy(87,14);printf("|____|____|____|____|____|____|____|\n");
	gotoxy(87,15);printf("|    |    |    |    |    |    |    |\n");
	gotoxy(87,16);printf("| 22 | 23 | 24 | 25 | 26 | 27 | 28 |\n"); //tempat penyimpanan kotak 22-28
	gotoxy(87,17);printf("|____|____|____|____|____|____|____|\n");
	gotoxy(87,18);printf("|    |    |    |    |    |    |    |\n");
	gotoxy(87,19);printf("| 29 | 30 | 31 | 32 | 33 | 34 | 35 |\n"); //tempat penyimpanan kotak 29-35
	gotoxy(87,20);printf("|____|____|____|____|____|____|____|\n");
    gotoxy(87,21);printf("|    |    |    |    |    |    |    |\n");
	gotoxy(87,22);printf("| 36 | 37 | 38 | 39 | 40 | 41 | 42 |\n"); //tempat penyimpanan kotak 36-42
	gotoxy(87,23);printf("|____|____|____|____|____|____|____|\n");
    gotoxy(87,24);printf("|    |    |    |    |    |    |    |\n");
	gotoxy(87,25);printf("| 43 | 44 | 45 | 46 | 47 | 48 | 49 |\n"); //tempat penyimpanan kotak 43-49
	gotoxy(87,26);printf("|____|____|____|____|____|____|____|\n");	
	/*END TAMPILAN PAPAN MAP*/

	printf("\n");		
	if(players == 1){
		gotoxy(63,29);printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
		gotoxy(63,30);printf(":: Player dapat %d poin, dan komputer %d poin::\n", Player1, Computer);
		gotoxy(63,31);printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
	}
	else if (players == 2){
		gotoxy(63,29);printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
		gotoxy(63,30);printf(":: Player1 dapat %d poin, dan player2 %d poin::\n", Player1, Player2);
		gotoxy(63,31);printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
	}
	return;
}
