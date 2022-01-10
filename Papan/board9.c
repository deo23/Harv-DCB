#include <stdio.h>

void board9();
int players=2, Player1=1, Player2=1, Computer;
int papan[9][9];
//Author	: Berliana Elfada

//Procedure untuk menampilkan papan ukuran 9x9
//I.S	: Layar menampilkan pilihan sebelum modul board9
//F.S	: Ditampilkan papan dengan grid 9x9

int main(){
	
	board9();
	return 0;
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
		gotoxy(63,32);printf("::::::::::::::::::::::::::::::::::::::::::::::::\n");
		gotoxy(63,33);printf(":: Player dapat %d poin, dan komputer %d poin  ::\n", Player1, Computer);
		gotoxy(63,34);printf("::::::::::::::::::::::::::::::::::::::::::::::::\n");
	}
	else if (players == 2){
		gotoxy(63,32);printf("::::::::::::::::::::::::::::::::::::::::::::::::\n");
		gotoxy(63,33);printf(":: Player1 dapat %d poin, dan player2 %d poin  ::\n", Player1, Player2);
		gotoxy(63,34);printf("::::::::::::::::::::::::::::::::::::::::::::::::\n");
	}
	return;
}
