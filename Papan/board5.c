#include <stdio.h>

void board5();
int players=2, Player1=1, Player2=1, Computer;
int papan[5][5];
//Author	: Berliana Elfada

//Procedure untuk menampilkan papan ukuran 5x5
//I.S	: Layar menampilkan pilihan sebelum modul board5
//F.S	: Ditampilkan papan dengan grid 5x5

int main(){
	
	board5();
	return 0;
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
		gotoxy(63,26);printf("\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::\n");
		gotoxy(63,27);printf("\t\t\t\t\t:: Player1 dapat %d poin, dan player2 %d poin::\n", Player1, Player2);
		gotoxy(63,28);printf("\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::\n");
	}
	return;

}
