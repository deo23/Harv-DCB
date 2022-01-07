#include <stdio.h>

void duaPemain7()
{
    /*
    Author : Muhammad Deo Audha Rizki
    
    Modul untuk memulai permainan Player vs Player dengan papan 7x7
    

    I.S : Ditampilkan tampilan layar pilih papan
    F.S : Ditampilkan tampilan permainan Player vs Player dengan papan 7x7
    
    */
	do
	{
		LangkahPemain7(1);
		if(game_done())
		{ 
			return;
		}
		LangkahPemain7(2);
	}while (!game_done());

	return;	
}
