void Mudah9();
//Modul ini untuk menentukan tingkat kesulitan yang mudah pada papan 9x9
//Author : Cintia Ningsih
//I.S    : Tampilan permainan dengan tingkat kesulitan mudah pada papan 9x9 belum ditampilkan
//F.S    : Tampilan permainan dengan tingkat kesulitan mudah pada papan 9x9 sudah ditampilkan

void Mudah9(){
	while(!game_done())
	{	
		
			LangkahPemain9(1);
			LangkahKomputerMudah9();		
		
	}
	return;
}
