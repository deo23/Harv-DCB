#include <stdio.h>
int cek_sos (int player, int kotak, char simbol)
{
    /*
    Author : Muhammad Deo Audha Rizki
    
    Modul untuk mengecek terbentuknya sos pada papan
    
    int player : parameter input bertipe integer dengan passing paramter passing by value
    int player : berfungsi untuk menunjukkan jenis player yang melakukan input

    int kotak : parameter input bertipe integer dengan passing parameter passing by value
    int kotak : berfungsi menunjukkan nomor kotak yang diinput oleh player/computer

    char simbol : parameter input bertipe character dengan passing parameter passing by value
    char simbol : berfungsi menunjukkan simbol yang diinput oleh player/komputer

    Input : player, kotak, simbol
    Output: Angka(1 jika terbentuk sos, 0 jika tidak terbentuk sos) 
    */
	int baris,kolom,sos,cek;

	
	baris = (kotak-1)/n;
	kolom = (kotak-1)%n;
	sos = 0;
		
  if(simbol == 'S'){
  
		if ((papan[baris][kolom-2] == 'S') && (papan[baris][kolom-1] == 'O') && (kolom-2>=0) && (kolom-1>=0)){	
			sos++;
			
		}
		if((papan[baris-1][kolom] == 'O') && (papan[baris-2][kolom] == 'S') && (baris-1>=0) && (baris-2>=0)){	
			sos++;
			
		}

		if((papan[baris-1][kolom-1] == 'O') && (papan[baris-2][kolom-2] == 'S') && (baris-1>=0 && kolom-1>=0) && (baris-2>=0 && kolom-2>=0)){	
			sos++;
			
		}
		if((papan[baris+1][kolom-1] == 'O') && (papan[baris+2][kolom-2] == 'S') && (kolom-1>=0) && (kolom-2>=0)){	
			sos++;
			
		}
		if((papan[baris-1][kolom+1] == 'O') && (papan[baris-2][kolom+2] == 'S') && (baris-1>=0) && (baris-2>=0)){	
			sos++;
			
		}
	if ((papan[baris][kolom+1]== 'O') && (papan[baris][kolom+2] == 'S')){	
		sos++;
		
	}	
	if((papan[baris+1][kolom] == 'O') && (papan[baris+2][kolom] == 'S')){	
		sos++;
		
	}
	
	if((papan[baris+1][kolom+1] == 'O') && (papan[baris+2][kolom+2] == 'S')){	
		sos++;
		
	}
	
	
	
  }
  else if(simbol == 'O'){
  
	if((papan[baris+1][kolom] == 'S') && (papan[baris-1][kolom] == 'S') && (baris-1>=0))
	{
		
		sos++;
	}
	if((papan[baris][kolom+1] == 'S') && (papan[baris][kolom-1] == 'S') && (kolom-1>=0))
	{
		
		sos++;
	}
	if((papan[baris+1][kolom+1] == 'S') && (papan[baris-1][kolom-1] == 'S') && (baris-1>=0 && kolom-1>=0))
	{
			
		sos++;
	}
	if((papan[baris+1][kolom-1] == 'S') && (papan[baris-1][kolom+1] == 'S') && (kolom-1>=0 && baris-1>=0))
	{
		
		sos++;
	}
  }



        if (player == 1)
        {
                Player1= Player1+sos;
				
        }
        else if (player == 2)
        {
                 Player2= Player2+sos;
        }
        else if (player == 3 && !game_done())
        {
                 Computer= Computer+sos;
        }
	


	if (sos>0 && !game_done())
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
