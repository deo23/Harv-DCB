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
	/*TAMPILAN PAPAN*//*TAMPILAN PAPAN YANG AKAN DIISI INPUT PLAYER*/
	
	printf(" ____ ____ ____ ____ ____ ____ ____\n");
	printf("|    |    |    |    |    |    |    |\n");
	printf("| %c  | %c  | %c  | %c  | %c  |  %c |  %c | \n", papan[0][0], papan[0][1], papan[0][2], papan[0][3], papan[0][4], papan[0][5], papan[0][6]); //tempat penyimpanan kotak 1-7
	printf("|____|____|____|____|____|____|____|\n");
	printf("|    |    |    |    |    |    |    |\n");
	printf("| %c  | %c  | %c  | %c  | %c  |  %c |  %c | \n", papan[1][0], papan[1][1], papan[1][2], papan[1][3], papan[1][4], papan[1][5], papan[1][6]); //tempat penyimpanan kotak 8-14
	printf("|____|____|____|____|____|____|____|\n");
	printf("|    |    |    |    |    |    |    |\n");
	printf("| %c  | %c  | %c  | %c  | %c  |  %c |  %c | \n", papan[2][0], papan[2][1], papan[2][2], papan[2][3], papan[2][4], papan[2][5], papan[2][6]); //tempat penyimpanan kotak 15-21
	printf("|____|____|____|____|____|____|____|\n");
	printf("|    |    |    |    |    |    |    |\n");
	printf("| %c  | %c  | %c  | %c  | %c  |  %c |  %c | \n", papan[3][0], papan[3][1], papan[3][2], papan[3][3], papan[3][4], papan[3][5], papan[3][6]); //tempat penyimpanan kotak 22-28
	printf("|____|____|____|____|____|____|____|\n");
	printf("|    |    |    |    |    |    |    |\n");
	printf("| %c  | %c  | %c  | %c  | %c  |  %c  |  %c  | \n", papan[4][0], papan[4][1], papan[4][2], papan[4][3], papan[4][4], papan[4][5], papan[4][6]); //tempat penyimpanan kotak 29-35
	printf("|____|____|____|____|____|____|____|\n");
    printf("|    |    |    |    |    |    |    |\n");
	printf("| %c   | %c   | %c   | %c  | %c   |  %c  |  %c  | \n", papan[5][0], papan[5][1], papan[5][2], papan[5][3], papan[5][4], papan[5][5], papan[5][6]); //tempat penyimpanan kotak 36-42
	printf("|____|____|____|____|____|____|____|\n");
    printf("|    |    |    |    |    |    |    |\n");
	printf("| %c   | %c   | %c   | %c   | %c   |  %c  |  %c  | \n", papan[6][0], papan[6][1], papan[6][2], papan[6][3], papan[6][4], papan[6][5], papan[6][6]); //tempat penyimpanan kotak 43-49
	printf("|____|____|____|____|____|____|____|\n");
	/*END TAMPILAN PAPAN YANG AKAN DIISI INPUT PLAYER*/
	
	
	
	/*TAMPILAN PAPAN MAP*/
	printf(" ____ ____ ____ ____ ____ ____ ____\n");
	printf("|    |    |    |    |    |    |    |\n");
	printf("| 1  | 2  | 3  | 4  |  5 |  6 | 7  | \n"); //tempat penyimpanan kotak 1-7
	printf("|____|____|____|____|____|____|____|\n");
	printf("|    |    |    |    |    |    |    |\n");
	printf("| 8  | 9  | 10 | 11 | 12 | 13 | 14 |\n");//tempat penyimpanan kotak 8-14
	printf("|____|____|____|____|____|____|____|\n");
	printf("|    |    |    |    |    |    |    |\n");
	printf("| 15 | 16 | 17 | 18 | 19 | 20 | 21 |  \n"); //tempat penyimpanan kotak 15-21
	printf("|____|____|____|____|____|____|____|\n");
	printf("|    |    |    |    |    |    |    |\n");
	printf("| 22 | 23 | 24 | 25 | 26 | 27 | 28 |\n"); //tempat penyimpanan kotak 22-28
	printf("|____|____|____|____|____|____|____|\n");
	printf("|    |    |    |    |    |    |    |\n");
	printf("| 29 | 30 | 31 | 32 | 33 | 34 | 35 |\n"); //tempat penyimpanan kotak 29-35
	printf("|____|____|____|____|____|____|____|\n");
    printf("|    |    |    |    |    |    |    |\n");
	printf("| 36 | 37 | 38 | 39 | 40 | 41 | 42 |\n"); //tempat penyimpanan kotak 36-42
	printf("|____|____|____|____|____|____|____|\n");
    printf("|    |    |    |    |    |    |    |\n");
	printf("| 43 | 44 | 45 | 46 | 47 | 48 | 49 |\n"); //tempat penyimpanan kotak 43-49
	printf("|____|____|____|____|____|____|____|\n");	
	/*END TAMPILAN PAPAN MAP*/

	printf("\n");		
	if(players == 1){
		printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
		printf(":: Player dapat %d poin, dan komputer %d poin ::\n", Player1, Computer);
		printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
	}
	else if (players == 2){
		printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
		printf(":: Player1 dapat %d poin, dan player2 %d poin ::\n", Player1, Player2);
		printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
	}
	return;
}