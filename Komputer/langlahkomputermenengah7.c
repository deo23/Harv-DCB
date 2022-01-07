#include<stdio.h>

//author	: Berliana Elfada
	
//Modul untuk menentukan langkah yang akan diambil oleh komputer dalam permaianan level menengah papan 7x7
//I.S : Papan belum menampilkan input simbol dari komputer (simbol S atau O)
//F.S : Simbol komputer (simbol S atau O) ditampilkan di papan

void LangkahKomputerMenengah7(){
	if(Player1 < 5){
		KomputerMudah7();
	
    	board7();
	}
	else{
		KomputerSulit();
		board7();
	}

   return;
}
