void board5(){
	/*TAMPILAN PAPAN*//*TAMPILAN PAPAN YANG AKAN DIISI INPUT PLAYER*/
	printf(" ____ ____ ____ ____ ____\n");
	printf("|    |    |    |    |    |\n");
	printf("| %c  | %c  | %c  | %c  | %c  | \n", papan[0][0], papan[0][1], papan[0][2], papan[0][3], papan[0][4]); //tempat penyimpanan kotak 1-5
	printf("|____|____|____|____|____|\n");
	printf("|    |    |    |    |    |\n");
	printf("| %c  | %c  | %c  | %c  | %c  | \n",papan[1][0], papan[1][1], papan[1][2], papan[1][3], papan[1][4]);//tempat penyimpanan kotak 6-10
	printf("|____|____|____|____|____|\n");
	printf("|    |    |    |    |    |\n");
	printf("| %c  | %c  | %c  | %c  | %c  | \n",papan[2][0], papan[2][1], papan[2][2], papan[2][3], papan[2][4]); //tempat penyimpanan kotak 11-15
	printf("|____|____|____|____|____|\n");
	printf("|    |    |    |    |    |\n");
	printf("| %c  | %c  | %c  | %c  | %c  | \n",papan[3][0], papan[3][1], papan[3][2], papan[3][3], papan[3][4]); //tempat penyimpanan kotak 16-20
	printf("|____|____|____|____|____|\n");
	printf("|    |    |    |    |    |\n");
	printf("| %c  | %c  | %c  | %c  | %c  | \n",papan[4][0], papan[4][1], papan[4][2], papan[4][3], papan[4][4]); //tempat penyimpanan kotak 21-25
	printf("|____|____|____|____|____|\n");
	/*END TAMPILAN PAPAN YANG AKAN DIISI INPUT PLAYER*/
	
	
	
	/*TAMPILAN PAPAN MAP*/
	gotoxy(47,0);printf(" ____ ____ ____ ____ ____\n");
	gotoxy(47,1);printf("|    |    |    |    |    |\n");
	gotoxy(47,2);printf("| 1  | 2  | 3  | 4  |  5 | \n"); //tempat penyimpanan kotak 1-5
	gotoxy(47,3);printf("|____|____|____|____|____|\n");
	gotoxy(47,4);printf("|    |    |    |    |    |\n");
	gotoxy(47,5);printf("|  6 |  7 |  8 |  9 | 10 | \n");//tempat penyimpanan kotak 6-10
	gotoxy(47,6);printf("|____|____|____|____|____|\n");
	gotoxy(47,7);printf("|    |    |    |    |    |\n");
	gotoxy(47,8);printf("| 11 | 12 | 13 | 14 | 15 |  \n"); //tempat penyimpanan kotak 11-15
	gotoxy(47,9);printf("|____|____|____|____|____|\n");
	gotoxy(47,10);printf("|    |    |    |    |    |\n");
	gotoxy(47,11);printf("| 16 | 17 | 18 | 19 | 20 | \n"); //tempat penyimpanan kotak 16-20
	gotoxy(47,12);printf("|____|____|____|____|____|\n");
	gotoxy(47,13);printf("|    |    |    |    |    |\n");
	gotoxy(47,14);printf("| 21 | 22 | 23 | 24 | 25 |  \n"); //tempat penyimpanan kotak 21-25
	gotoxy(47,15);printf("|____|____|____|____|____|\n");	
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
