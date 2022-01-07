void duaPemain5();
//Modul ini untuk menjalankan permainan dengan jumlah player sebanyak 2, dan menjalankan permainan secara bergiliran
//Author : Cintia Ningsih
//I.S    : Ditampilkan tampilan layar modul pilihpapan
//F.S    : Ditampilkan tampilan permainan player vs player dengan papan 5x5

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
