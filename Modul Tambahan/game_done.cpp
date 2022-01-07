int game_done();
//Fungsi ini untuk mengecek permainan sudah selesai atau belum. Jika semua papan sudah terisi maka permianan selesai.
//Author : Cintia Ningsih
//Input  : papan
//Output : Return 1 jika papan sudah terisi semua dan return 0 jika papan belum terisi semua

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
