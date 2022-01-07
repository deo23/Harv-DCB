#include <stdio.h>
void duaPemain9()
{
    /*
    Author : Muhammad Deo Audha Rizki
    
    Modul untuk memulai permainan Player vs Player dengan papan 9x9
    

    I.S : Ditampilkan tampilan layar pilih papan
    F.S : Ditampilkan tampilan permainan Player vs Player dengan papan 9x9
    
    */
	do
	{
		LangkahPemain9(1);
		if(game_done())
		{ 
			return;
		}
		LangkahPemain9(2);
	}while (!game_done());

	return;	
}
