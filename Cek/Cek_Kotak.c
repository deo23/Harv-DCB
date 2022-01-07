#include <stdio.h>

int Cek_Kotak (int kotak)
{
    /*
    Author : Muhammad Deo Audha Rizki
    
    Modul untuk mengecek kotak apakah bisa diinput atau tidak 

    int kotak : parameter input bertipe integer dengan passing parameter passing by value
    int kotak : berfungsi menunjukkan nomor kotak yang diinput oleh player/computer

    Input : kotak
    Output: Angka (1 jika kotak bisa diisi, 0 jika kotak tidak bisa diisi)
    F.S : Ditampilkan tampilan permainan Player vs Player dengan papan 9x9
    
    */
   int baris, kolom;
   
   if(kotak>0 && kotak<((n*n)+1)){	
	baris = (kotak-1)/n;
	kolom = (kotak-1)%n;

	    if (papan[baris][kolom]==' '){
		return 1;
	    }
	    else{
		
		return 0;
	    } 
    }
    else{
	  
	  return 0;
    }
}
