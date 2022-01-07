void pemenang();
//Modul ini untuk menentukan pemenang dalam permainan dan penampilkannya kelayar
//Author : Cintia Ningsih
//I.S    : Tampilan untuk pemanang dalam permainan belum tampil
//F.S    : Tampilan untuk pemenang dalam permainan sudah tampil

void pemenang()
{
	if ((Player1 > Player2) && (Player1 > Computer))
	{
		printf("Player 1 menang!\n");
	}
	else if (Player2> Player1)
	{
		printf("Player 2 menang!\n");
	}
	else if (Computer > Player1)
	{ 
		printf("Saya menang!\n");
	}
	else
	{
		printf("Permainan seri\n");
	}
}
