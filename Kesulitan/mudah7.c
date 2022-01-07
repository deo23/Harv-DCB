// author	: Berliana Elfada

//Modul untuk memulai permaianan dengan level menengah papan 7x7
//I.S : Ditampilkan tampilan layar modul jumlahpemain
//F.S : Ditampilkan tampilan permainan dengan tingkat kesulitan menengah pada papan 7x7

void Mudah7(){
	while(!game_done())
	{	
		
			LangkahPemain7(1);
			LangkahKomputerMudah7();		
		
	}
	return;
}
