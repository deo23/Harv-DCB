#include<stdio.h>

//author	: Berliana Elfada
	
//Modul untuk menentukan langkah yang akan diambil oleh komputer dalam permaianan level menengah papan 9x9
//I.S : Papan belum menampilkan input simbol dari komputer (simbol S atau O)
//F.S : Simbol komputer (simbol S atau O) ditampilkan di papan

void LangkahKomputerMenengah9(){
	if(Player1 < 5){
		KomputerMudah9();
	
    	board9();
	}
	else{
		KomputerSulit();
		board9();
	}

   return;
}