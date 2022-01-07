// author	: Berliana Elfada

//Modul untuk memulai permaianan dengan level sulit papan 7x7
//I.S : Ditampilkan tampilan layar modul jumlahpemain
//F.S : Ditampilkan tampilan permainan dengan tingkat kesulitan sulit pada papan 7x7

void Sulit7(){
	while(!game_done())
	{	
		
			LangkahPemain7(1);
			LangkahKomputerSulit7();		
		
	}
	return;
}
