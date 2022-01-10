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
   /*TAMPILAN PAPAN*//*TAMPILAN PAPAN YANG AKAN DIISI INPUT PLAYER*/
	printf(" ____ ____ ____ ____ ____ ____ ____ ____ ____\n");
	printf("|    |    |    |    |    |    |    |    |    |\n");
	printf("| %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | \n", papan[0][0], papan[0][1], papan[0][2], papan[0][3], papan[0][4], papan[0][5], papan[0][6], papan[0][7], papan[0][8]); //tempat penyimpanan kotak 1-9
	printf("|____|____|____|____|____|____|____|____|____|\n");
	printf("|    |    |    |    |    |    |    |    |    |\n");
	printf("| %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | \n", papan[1][0], papan[1][1], papan[1][2], papan[1][3], papan[1][4], papan[1][5], papan[1][6], papan[1][7], papan[1][8]); //tempat penyimpanan kotak 10-18
	printf("|____|____|____|____|____|____|____|____|____|\n");
	printf("|    |    |    |    |    |    |    |    |    |\n");
	printf("| %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | \n", papan[2][0], papan[2][1], papan[2][2], papan[2][3], papan[2][4], papan[2][5], papan[2][6], papan[2][7], papan[2][8]); //tempat penyimpanan kotak 19-27
	printf("|____|____|____|____|____|____|____|____|____|\n");
	printf("|    |    |    |    |    |    |    |    |    |\n");
	printf("| %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | \n", papan[3][0], papan[3][1], papan[3][2], papan[3][3], papan[3][4], papan[3][5], papan[3][6], papan[3][7], papan[3][8]); //tempat penyimpanan kotak 28-36
	printf("|____|____|____|____|____|____|____|____|____|\n");
	printf("|    |    |    |    |    |    |    |    |    |\n");
	printf("| %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | \n", papan[4][0], papan[4][1], papan[4][2], papan[4][3], papan[4][4], papan[4][5], papan[4][6], papan[4][7], papan[4][8]); //tempat penyimpanan kotak 37-45
	printf("|____|____|____|____|____|____|____|____|____|\n");
    printf("|    |    |    |    |    |    |    |    |    |\n");
	printf("| %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | \n", papan[5][0], papan[5][1], papan[5][2], papan[5][3], papan[5][4], papan[5][5], papan[5][6], papan[5][7], papan[5][8]); //tempat penyimpanan kotak 46-54
	printf("|____|____|____|____|____|____|____|____|____|\n");
    printf("|    |    |    |    |    |    |    |    |    |\n");
	printf("| %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | \n", papan[6][0], papan[6][1], papan[6][2], papan[6][3], papan[6][4], papan[6][5], papan[6][6], papan[6][7], papan[6][8]); //tempat penyimpanan kotak 55-63
	printf("|____|____|____|____|____|____|____|____|____|\n");
    printf("|    |    |    |    |    |    |    |    |    |\n");
	printf("| %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | \n", papan[7][0], papan[7][1], papan[7][2], papan[7][3], papan[7][4], papan[7][5], papan[7][6], papan[7][7], papan[7][8]); //tempat penyimpanan kotak 64-72
	printf("|____|____|____|____|____|____|____|____|____|\n");
    printf("|    |    |    |    |    |    |    |    |    |\n");
	printf("| %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | %c  | \n", papan[8][0], papan[8][1], papan[8][2], papan[8][3], papan[8][4], papan[8][5], papan[8][6], papan[8][7], papan[8][8]); //tempat penyimpanan kotak 73-81
	printf("|____|____|____|____|____|____|____|____|____|\n");
	/*END TAMPILAN PAPAN YANG AKAN DIISI INPUT PLAYER*/
	
	/*TAMPILAN PAPAN MAP*/
	printf(" ____ ____ ____ ____ ____ ____ ____ ____ ____\n");
	printf("|    |    |    |    |    |    |    |    |    |\n");
	printf("| 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  | 9  |\n"); //tempat penyimpanan kotak 1-9
	printf("|____|____|____|____|____|____|____|____|____|\n");
	printf("|    |    |    |    |    |    |    |    |    |\n");
	printf("| 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 |\n"); //tempat penyimpanan kotak 10-18
	printf("|____|____|____|____|____|____|____|____|____|\n");
	printf("|    |    |    |    |    |    |    |    |    |\n");
	printf("| 19 | 20 | 21 | 22 | 23 | 24 | 25 | 26 | 27 |\n"); //tempat penyimpanan kotak 19-27
	printf("|____|____|____|____|____|____|____|____|____|\n");
	printf("|    |    |    |    |    |    |    |    |    |\n");
	printf("| 28 | 29 | 30 | 31 | 32 | 33 | 34 | 35 | 36 |\n"); //tempat penyimpanan kotak 28-36
	printf("|____|____|____|____|____|____|____|____|____|\n");
	printf("|    |    |    |    |    |    |    |    |    |\n");
	printf("| 37 | 38 | 39 | 40 | 41 | 42 | 43 | 44 | 45 |\n"); //tempat penyimpanan kotak 37-45
	printf("|____|____|____|____|____|____|____|____|____|\n");
    printf("|    |    |    |    |    |    |    |    |    |\n");
	printf("| 46 | 47 | 48 | 49 | 50 | 51 | 52 | 53 | 54 |\n"); //tempat penyimpanan kotak 46-54
	printf("|____|____|____|____|____|____|____|____|____|\n");
    printf("|    |    |    |    |    |    |    |    |    |\n");
	printf("| 55 | 56 | 57 | 58 | 59 | 60 | 61 | 62 | 63 |\n"); //tempat penyimpanan kotak 55-63
	printf("|____|____|____|____|____|____|____|____|____|\n");
    printf("|    |    |    |    |    |    |    |    |    |\n");
	printf("| 64 | 65 | 66 | 67 | 68 | 69 | 70 | 71 | 72 |\n"); //tempat penyimpanan kotak 64-72
	printf("|____|____|____|____|____|____|____|____|____|\n");
    printf("|    |    |    |    |    |    |    |    |    |\n");
	printf("| 73 | 74 | 75 | 76 | 77 | 78 | 79 | 80 | 81 |\n"); //tempat penyimpanan kotak 73-81
	printf("|____|____|____|____|____|____|____|____|____|\n");	
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
